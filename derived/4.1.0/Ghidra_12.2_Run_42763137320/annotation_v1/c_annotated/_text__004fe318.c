/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003FE318
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fe318; name: FUN_.text__004fe318
 */


undefined8 FUN__text__004fe318(undefined8 param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_4c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = *(undefined8 *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar1 = *(byte *)(param_2 + 0x310); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = (long *)FUN__text__00400f80(0,0xf8); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    FUN__text__00501ee0(plVar3,param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(int *)(plVar3 + 9) = (int)plVar3[9] + 1;
    iVar2 = FUN__text__00502104(plVar3,uVar4,param_2 + 0x20,bVar1 >> 2 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar2 == 1) { // [自动静态注释] 条件判断/分支
      FUN__text__004eb980(plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(*plVar3 + 0x80))(plVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      local_4c = **(undefined4 **)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_48 = (*(undefined4 **)(param_2 + 0x18))[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_44 = FUN__text__004f5ed0(plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__004ebee4(plVar3,&local_4c); // [自动静态注释] 调用尚未恢复正式名称的函数
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__004ec13c(plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__004eb980(plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


