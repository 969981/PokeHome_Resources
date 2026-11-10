/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003CC734
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cc734; name: FUN_.text__004cc734
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__004cc734(int *param_1,undefined4 param_2,undefined8 param_3,ulong param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                   undefined8 param_5,undefined8 param_6,undefined8 param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_2c [12]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*param_1 != (int)param_4) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((int)param_4 == 0) { // [自动静态注释] 条件判断/分支
    lVar4 = *(long *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else if (*(char *)((long)param_1 + 0x12) == '\0') { // [自动静态注释] 条件判断/分支
    lVar4 = FUN__text__004cc870(param_1,*(undefined8 *)(param_1 + 2),param_3,param_4,param_2,param_6 // [自动静态注释] 调用尚未恢复正式名称的函数
                                ,param_7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = FUN__text__004cc3d0(param_1,param_3,param_4 & 0xffffffff,param_2,param_2,auStack_2c); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = *(ushort *)(param_1 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(ushort *)(lVar4 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((99 < uVar2) && (99 < uVar3)) { // [自动静态注释] 条件判断/分支
    return *(undefined4 *)(lVar4 + 4); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *_DAT_008a45e8 = lVar5;
  uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uint)(int)((double)(uint)((ulong)lVar5 >> 0x21) * 4.656612875245797e-06) < // [自动静态注释] 条件判断/分支
      (uint)(ushort)(uVar3 * uVar2)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar1 = *(undefined4 *)(lVar4 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


