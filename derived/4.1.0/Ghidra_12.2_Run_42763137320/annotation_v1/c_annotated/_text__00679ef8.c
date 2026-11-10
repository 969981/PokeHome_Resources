/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00579EF8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00679ef8; name: FUN_.text__00679ef8
 */


undefined8 FUN__text__00679ef8(long param_1,undefined4 param_2,undefined4 param_3,char *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  size_t sVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(byte *)(param_1 + 0x9ab) & 1) != 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x280) = 0xf;
  if (param_4 == (char *)0x0) { // [自动静态注释] 条件判断/分支
    sVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    sVar1 = strlen(param_4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = FUN__text__0067f8cc(param_1,param_2,param_3,param_4,sVar1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((int)uVar2 == 0) { // [自动静态注释] 条件判断/分支
    *(byte *)(param_1 + 0x9ab) = *(byte *)(param_1 + 0x9ab) | 1;
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


