commit_message=${user_msg:-"updated"}

git add .
git commit -m "$commit_message"
git push

echo "changes pushed successfully"

echo "$(date) - $commit_message" >> git_log.txt