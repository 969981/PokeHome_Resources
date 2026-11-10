/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005267A0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006267a0; name: FUN_.text__006267a0
 */


void FUN__text__006267a0(undefined8 param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_2d8 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_2d0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_2c6 [662]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  memset(auStack_2c6,0,0x296); // [自动静态注释] 内存复制、清零或移动
  FUN__text__006303f4(auStack_2c6,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0060e784(auStack_2d8,auStack_2c6); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = FUN__text__0060e7f8(auStack_2d8); // [自动静态注释] 调用尚未恢复正式名称的函数
  pcVar3 = (char *)(local_2d0 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__0060e994(auStack_2d8,pcVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  while ((uVar2 & 1) != 0) { // [自动静态注释] 循环/迭代
    if (*pcVar3 == '\x04') { // [自动静态注释] 条件判断/分支
      pcVar3 = (char *)(local_2d0 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = FUN__text__0060e994(auStack_2d8,pcVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((uVar2 & 1) != 0) goto LAB__text__00626850; // [自动静态注释] 条件判断/分支
      goto LAB__text__00626888; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    pcVar3 = pcVar3 + (ulong)*(ushort *)(pcVar3 + 1) + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = FUN__text__0060e994(auStack_2d8,pcVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  goto LAB__text__00626894; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  while( true ) { // [自动静态注释] 循环/迭代
    pcVar3 = pcVar3 + (ulong)*(ushort *)(pcVar3 + 1) + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = FUN__text__0060e994(auStack_2d8,pcVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar2 & 1) == 0) break; // [自动静态注释] 条件判断/分支
LAB__text__00626850: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*pcVar3 == '\x04') { // [自动静态注释] 条件判断/分支
      FUN__text__006268b0(pcVar3 + 3,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__00626888: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00630654(param_1,auStack_2c6); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__00626894: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__0060e79c(auStack_2d8); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


