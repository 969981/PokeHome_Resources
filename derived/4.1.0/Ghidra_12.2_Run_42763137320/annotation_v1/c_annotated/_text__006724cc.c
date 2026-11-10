/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005724CC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006724cc; name: FUN_.text__006724cc
 */


undefined8 FUN__text__006724cc(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar4 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    uVar2 = *(ushort *)(param_1 + 0x15a4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(uint *)(param_2 + 0x3fc) = *(uint *)(param_2 + 0x3fc) & 0xfffff7ff;
    uVar2 = *(ushort *)(param_1 + 0x15a4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar2 >> 7 & 1) != 0) { // [自动静态注释] 条件判断/分支
      uVar1 = uVar2 & 0xff7f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((*(byte *)(*(long *)(param_2 + 0x420) + 0x85) & 0x10) != 0) { // [自动静态注释] 条件判断/分支
        uVar1 = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar2 = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(ushort *)(param_1 + 0x15a4) = uVar2 & 0xf6ff;
  if ((*(byte *)(param_1 + 0xf43) & 1) == 0) { // [自动静态注释] 条件判断/分支
    if (*(int *)(param_1 + 0xa38) != 6) goto LAB__text__00672540; // [自动静态注释] 条件判断/分支
    uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0xa38) = uVar3;
LAB__text__00672540: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  auVar4 = FUN__text__0066c6a8(); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 (*) [16])(param_1 + 0x120) = auVar4;
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x1130);
  *(undefined1 (*) [16])(param_1 + 0x130) = auVar4;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) & 0xfff7 | 1;
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x1120);
  FUN__text__0066bdc4(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0066667c(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00666674(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


