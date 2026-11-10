/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003A5CD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a5cd0; name: FUN_.text__004a5cd0
 */


undefined4 FUN__text__004a5cd0(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char acStack_a0 [128]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  pcVar4 = (char *)FUN__text__004ae940(param_1 + 8); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*pcVar4 != '\0') { // [自动静态注释] 条件判断/分支
    uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar1 = uVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = uVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (pcVar4[lVar2] != '\0'); // [自动静态注释] 循环/迭代
    if ((int)uVar1 != 0) { // [自动静态注释] 条件判断/分支
      pcVar4 = strncpy(acStack_a0 + (0x80 - ((ulong)((int)uVar1 + 1) + 0xf & 0x1fffffff0)),pcVar4, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                       uVar1 & 0xffffffff); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      pcVar4[uVar1 & 0xffffffff] = '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = FUN__text__00410f30(); // [自动静态注释] 调用尚未恢复正式名称的函数
      goto LAB__text__004a5d64; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__004a5d64: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__004aecbc(param_1 + 8); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


