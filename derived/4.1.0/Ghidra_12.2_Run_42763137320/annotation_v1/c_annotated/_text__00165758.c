/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00065758
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00165758; name: FUN_.text__00165758
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00165758(long param_1,uint param_2,undefined8 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__00306608(*param_3,*(undefined8 *)(param_1 + 0x170)); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar1 = FUN__text__0030680c(*param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
    uVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else if (iVar1 == 1) { // [自动静态注释] 条件判断/分支
    uVar9 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar1 = FUN__text__0016a530(); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar9 = (uint)(iVar1 == 5) << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = FUN__text__003069d0(*param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__0016ad94(uVar5,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = FUN__text__0016ae08(*_DAT_0089f560); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00156ff8(*(undefined8 *)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x170),uVar2,uVar3) // [自动静态注释] 调用尚未恢复正式名称的函数
  ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar5 = FUN__text__00157128(*(undefined8 *)(param_1 + 0x198)); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar8 = *(long *)(param_1 + 0x170); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar8 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = FUN__text__00601370(*(undefined8 *)(param_1 + 0x178),0x402); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar1 = FUN__text__0016a530(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((iVar1 - 2U < 5) || (iVar1 == 10)) { // [自动静态注释] 条件判断/分支
    uVar6 = FUN__text__005f3228(lVar8,*(undefined8 *)(param_1 + 0x178)); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar6 & 1) == 0) { // [自动静态注释] 条件判断/分支
      uVar9 = uVar9 | 0x200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = *(uint *)(param_1 + 0x1a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar9 = uVar4 & 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = *(uint *)(param_1 + 0x1a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar4 = *(uint *)(param_1 + 0x1a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (param_2 < uVar4) { // [自动静态注释] 条件判断/分支
    *(ulong *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 8) = (ulong)uVar9;
    FUN__text__005f3280(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18),uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined2 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar7 = *(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(ushort *)(lVar7 + 0x12) = *(ushort *)(lVar7 + 0x12) & 0xfffe;
  } // [自动静态注释] 作用域/控制流边界
  if (lVar8 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x001658a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


