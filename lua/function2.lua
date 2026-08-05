function takeDamage(playerHealth, damage)
	return playerHealth - damage
end

-- takeDamage(9999999999999, 123987) これだと表示されない
print(takeDamage(981239812398123, 123796))
