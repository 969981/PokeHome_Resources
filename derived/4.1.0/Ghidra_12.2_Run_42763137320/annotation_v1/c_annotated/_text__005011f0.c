/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004011F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005011f0; name: FUN_.text__005011f0
 */


void FUN__text__005011f0(undefined8 *param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_50 [32]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_30 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = 0;
  param_1[1] = 0xffffffff00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__004e7a7c(auStack_30); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar1 = FUN__text__005013f8(param_2,auStack_30); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar1 == 1) { // [自动静态注释] 条件判断/分支
    FUN__text__004e2cb8(auStack_50); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__004e2e80(auStack_50,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = FUN__text__004e7ad8(auStack_30); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = FUN__text__004e2de0(auStack_50,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (((uVar3 & 1) != 0) && (iVar1 = FUN__text__005013f8(param_2,auStack_50), iVar1 == 1)) { // [自动静态注释] 条件判断/分支
      uVar2 = FUN__text__004e2e48(auStack_50); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar4 = FUN__text__004e2e60(auStack_50); // [自动静态注释] 调用尚未恢复正式名称的函数
      *param_1 = uVar4;
      *(undefined4 *)(param_1 + 1) = uVar2;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__004e2cd8(auStack_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004e7a94(auStack_30); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


