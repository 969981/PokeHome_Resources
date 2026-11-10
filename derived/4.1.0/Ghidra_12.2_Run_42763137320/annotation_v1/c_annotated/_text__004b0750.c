/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003B0750
 * 用途/行为：用途尚未确认；代码可观察到：内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b0750; name: FUN_.text__004b0750
 */


/* WARNING: Removing unreachable block (ram,0x004b2348) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004b0750(long param_1,byte param_2,undefined1 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_3 = 0;
  piVar9 = _DAT_008a48e0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  DataMemoryBarrier(2,3); // [自动静态注释] AArch64 独占访问或内存屏障
  iVar8 = (int)*(undefined8 *)(param_1 + 0x18) - (int)*(undefined8 *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = (*(uint *)(param_1 + 0x30) & iVar8 >> 0x1f) + iVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
    if ((param_2 & 1) == 0) { // [自动静态注释] 条件判断/分支
      if (*(int *)(param_1 + 0x8c) != 0) goto LAB__text__004b07e4; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    else if (*(uint *)(param_1 + 0x30) >> 1 < uVar2) { // [自动静态注释] 条件判断/分支
LAB__text__004b07e4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar11 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar13 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      while( true ) { // [自动静态注释] 循环/迭代
        puVar1 = (ulong *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar12 = (ushort *)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        while( true ) { // [自动静态注释] 循环/迭代
          puVar6 = (ushort *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (puVar12 != *(ushort **)(param_1 + 0x18)) { // [自动静态注释] 条件判断/分支
            puVar6 = puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          uVar7 = *puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*puVar1 + 4 <= *(ulong *)(param_1 + 0x28)) break; // [自动静态注释] 条件判断/分支
          uVar4 = *puVar1 + (ulong)(*(int *)(param_1 + 0x30) + 3U & 0xfffffffc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(ulong *)(param_1 + 0x28) <= uVar4) { // [自动静态注释] 条件判断/分支
            uVar4 = *(ulong *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          *puVar1 = uVar4;
          puVar12 = (ushort *)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        if (puVar6[1] < 0x3f) break; // [自动静态注释] 条件判断/分支
        lVar11 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = *(ulong *)(param_1 + 0x10) + (ulong)(uVar7 + 3 & 0x1fffc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(ulong *)(param_1 + 0x28) <= uVar4) { // [自动静态注释] 条件判断/分支
          uVar4 = *(ulong *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(ulong *)(param_1 + 0x10) = uVar4;
        uVar3 = uVar13 + uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar5 = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((param_2 & 1) == 0) { // [自动静态注释] 条件判断/分支
          uVar5 = uVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *piVar9 = *piVar9 + 1;
        uVar13 = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((param_2 & 1 & uVar2 >> 1 <= uVar3) != 0) { // [自动静态注释] 条件判断/分支
          return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not emulate address calculation at 0x004b08b4 */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (*(code *)(&UNK__text__004b08c0 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                         (ulong)*(ushort *)((ulong)puVar6[1] * 2 + 0x73d9b0) * 4))(lVar11); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return uVar10; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


