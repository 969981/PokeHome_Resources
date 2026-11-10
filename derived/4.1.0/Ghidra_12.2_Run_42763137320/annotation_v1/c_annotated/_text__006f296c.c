/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005F296C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f296c; name: FUN_.text__006f296c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f296c(undefined8 param_1,byte *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  (*(code *)*_DAT_008a7580)(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar1 = *(ushort *)(param_2 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = uVar1 >> 4 & 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 == 2) { // [自动静态注释] 条件判断/分支
    iVar5 = 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar1 & 3) != 2) { // [自动静态注释] 条件判断/分支
      iVar5 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    iVar3 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar1 & 3) != 1) { // [自动静态注释] 条件判断/分支
      iVar3 = iVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (uVar2 != 1) goto LAB__text__006f2b28; // [自动静态注释] 条件判断/分支
    iVar3 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar1 & 3) != 1) { // [自动静态注释] 条件判断/分支
      iVar3 = (uint)((uVar1 & 3) == 2) << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = uVar1 >> 2 & 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 == 1) { // [自动静态注释] 条件判断/分支
    uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (uVar1 != 2) { // [自动静态注释] 条件判断/分支
LAB__text__006f2b28: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      nn::detail::UnexpectedDefaultImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  (*(code *)*_DAT_008a7588)(param_1,iVar3,uVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*DAT_00c60618)(param_1,*(undefined4 *)((ulong)*param_2 * 4 + 0x77f198), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  *(undefined4 *)((ulong)param_2[1] * 4 + 0x77f198),
                  *(undefined4 *)((ulong)param_2[2] * 4 + 0x77f198));
  (*(code *)*_DAT_008a7598)(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*(code *)*_DAT_008a75a0)(*(undefined4 *)(param_2 + 0x10),param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*DAT_00c60630)(param_1,*(ushort *)(param_2 + 6) >> 7 & 1, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  *(undefined4 *)((ulong)param_2[3] * 4 + 0x724fd0));
  (*DAT_00c60638)(param_1,(ulong)param_2[4] * 0x10 + 0x77f1d0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar1 = *(ushort *)(param_2 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar1 >> 6 & 1) != 0) { // [自动静态注释] 条件判断/分支
    uVar6 = NEON_ucvtf((uint)param_2[5]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*(code *)*_DAT_008a75c8)(uVar6,param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar1 = *(ushort *)(param_2 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x006f2b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00c60658)(param_1,*(undefined4 *)((ulong)(uVar1 >> 8 & 3) * 4 + 0x77f1c4)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


