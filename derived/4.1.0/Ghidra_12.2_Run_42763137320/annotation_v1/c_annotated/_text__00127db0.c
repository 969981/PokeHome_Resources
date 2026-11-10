/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00027DB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00127db0; name: FUN_.text__00127db0
 */


uint FUN__text__00127db0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = *(undefined8 **)(param_1 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  for (puVar4 = *(undefined8 **)(param_1 + 0x78); puVar4 != puVar1; puVar4 = puVar4 + 1) { // [自动静态注释] 循环/迭代
    uVar2 = (**(code **)(*(long *)*puVar4 + 0x48))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = uVar3 & uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


