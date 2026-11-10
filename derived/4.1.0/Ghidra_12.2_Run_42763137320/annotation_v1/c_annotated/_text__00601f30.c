/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00501F30
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00601f30; name: FUN_.text__00601f30
 */


void FUN__text__00601f30(undefined8 param_1,char *param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char acStack_170 [63]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_131; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char acStack_130 [255]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_31; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  snprintf(acStack_170,0x3f,(char *)0x715434,param_3 & 0xffffffff); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_131 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  sVar2 = strlen(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (sVar2 == 0) { // [自动静态注释] 条件判断/分支
    uVar3 = 0x70f683; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = 0x70f683; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_2[sVar2 - 1] != '/') { // [自动静态注释] 条件判断/分支
      uVar3 = 0x70eff8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  pcVar1 = (char *)0x70f683; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 != (char *)0x0) { // [自动静态注释] 条件判断/分支
    pcVar1 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  snprintf(acStack_130,0xff,(char *)0x71c4e8,pcVar1,uVar3,acStack_170); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_31 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0060213c(param_1,acStack_130); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


