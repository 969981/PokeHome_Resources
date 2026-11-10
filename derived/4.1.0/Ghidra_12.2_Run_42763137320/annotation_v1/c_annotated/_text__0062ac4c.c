/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0052AC4C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0062ac4c; name: FUN_.text__0062ac4c
 */


void FUN__text__0062ac4c(undefined8 param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_50 [32]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__0060eea4(auStack_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0060efe0(auStack_50,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00617ee0(auStack_50,5); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = FUN__text__006092f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar3 & 1) == 0) goto LAB__text__0062ad90; // [自动静态注释] 条件判断/分支
  uVar3 = FUN__text__0060f6e0(auStack_50,7); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
LAB__text__0062acc4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = FUN__text__0060f6e0(auStack_50,4); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
      uVar1 = FUN__text__00617a10(auStack_50,4); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar2 = FUN__text__00617ee0(auStack_50,4); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = FUN__text__006092f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((uVar3 & 1) == 0) goto LAB__text__0062ad6c; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    uVar3 = FUN__text__0060f6e0(auStack_50,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
      uVar1 = FUN__text__00617a10(auStack_50,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar2 = FUN__text__00617ee0(auStack_50,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = FUN__text__006092f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((uVar3 & 1) == 0) goto LAB__text__0062ad6c; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    uVar3 = FUN__text__0060f6e0(auStack_50,3); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar3 & 1) == 0) goto LAB__text__0062ad90; // [自动静态注释] 条件判断/分支
    uVar1 = FUN__text__00617a10(auStack_50,3); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = FUN__text__00617ee0(auStack_50,3); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = FUN__text__006092f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar3 & 1) != 0) goto LAB__text__0062ad90; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar1 = FUN__text__00617a10(auStack_50,7); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = FUN__text__00617ee0(auStack_50,7); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = FUN__text__006092f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar3 & 1) != 0) goto LAB__text__0062acc4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0062ad6c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__0061ebb0(auStack_50,uVar1,5); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0061f0a0(auStack_50,uVar2,5); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__0062ad90: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__0060eef8(auStack_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


