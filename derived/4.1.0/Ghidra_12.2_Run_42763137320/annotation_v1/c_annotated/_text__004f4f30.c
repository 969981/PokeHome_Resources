/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003F4F30
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f4f30; name: FUN_.text__004f4f30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004f4f30(long param_1,int *param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined1 auVar1 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong extraout_x1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 unaff_x21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_c0 [128]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar3 = _DAT_008a4b68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  auVar1 = SEXT816((long)((ulong)*_DAT_008a4b68 * (long)*param_2)) * SEXT816(0x20c49ba5e353f7cf); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = (int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar4 = FUN__text__004f47e8(*(undefined8 *)(param_1 + 0x90)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((int)uVar5 < -iVar4) { // [自动静态注释] 条件判断/分支
    iVar4 = FUN__text__004f47e8(*(undefined8 *)(param_1 + 0x90)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar5 = -iVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((param_3 & 1) != 0) { // [自动静态注释] 条件判断/分支
    uVar5 = FUN__text__004f4a40(*(undefined8 *)(param_1 + 0x90),uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    dVar8 = (double)NEON_ucvtf((ulong)*puVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar8 = ((double)(int)uVar5 * 1000.0) / dVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar9 = 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (dVar8 <= 0.0) { // [自动静态注释] 条件判断/分支
      dVar9 = -0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *param_2 = (int)(dVar9 + dVar8);
  } // [自动静态注释] 作用域/控制流边界
  if ((*(byte *)(param_1 + 0x5a) & 0xe) != 0) { // [自动静态注释] 条件判断/分支
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  uVar2 = (ulong)uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = *(long *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (lVar6 != 0) { // [自动静态注释] 循环/迭代
    lVar7 = *(long *)(lVar6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__004ec13c(lVar6,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = extraout_x1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004f5550(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = *(long *)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar4 = FUN__text__004f4de4(param_1,*(undefined8 *)(lVar6 + 0x30),lVar6 + 0x18,(ulong)uVar5, // [自动静态注释] 调用尚未恢复正式名称的函数
                              auStack_c0 + 0xac,*(undefined1 *)(lVar6 + 0x38)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (iVar4 == 1) { // [自动静态注释] 条件判断/分支
    lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar7 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar6 = *(long *)(lVar7 + 0x68) + lVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar7 = *(long *)(lVar7 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar7 != 0); // [自动静态注释] 循环/迭代
    *(long *)(param_1 + 0x68) =
         (*(long *)(*(long *)(param_1 + 0x60) + 8) - lVar6) + (long)(int)((ulong)unaff_x21 >> 0x20); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__004ec010(param_1,auStack_c0 + 0x88,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004eb980(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return iVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


