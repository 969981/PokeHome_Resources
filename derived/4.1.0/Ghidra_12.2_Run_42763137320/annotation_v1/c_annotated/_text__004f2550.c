/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003F2550
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f2550; name: FUN_.text__004f2550
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__004f2550(long *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double *pdVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar8 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = lVar8 + 4;
  bVar3 = *(byte *)(lVar8 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = lVar8 + 5;
  *(byte *)((long)param_1 + 0x11c) =
       bVar3 & 8 | bVar3 >> 1 & 3 | *(byte *)((long)param_1 + 0x11c) & 0xf4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar6 = FUN__text__004684a0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((int)uVar6 != 1) { // [自动静态注释] 条件判断/分支
    return uVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  pdVar9 = (double *)((uint *)*param_2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar13 = *(uint *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = (long)pdVar9;
  if (uVar13 != 0) { // [自动静态注释] 条件判断/分支
    iVar7 = uVar13 - *(uint *)((long)param_1 + 0x104); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(uint *)((long)param_1 + 0x104) <= uVar13 && iVar7 != 0) && // [自动静态注释] 条件判断/分支
       (uVar6 = FUN__text__00463130(param_1 + 0x1e,iVar7), (uVar6 & 1) == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
      return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    do { // [自动静态注释] 循环/迭代
      uVar2 = *(undefined4 *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      uVar6 = (**(code **)(*param_1 + 0x50))(param_1,uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar7 = (int)uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar7 != 0xf && iVar7 != 1) { // [自动静态注释] 条件判断/分支
        return uVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      uVar13 = uVar13 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar13 != 0); // [自动静态注释] 循环/迭代
    if (iVar7 != 1) { // [自动静态注释] 条件判断/分支
      return uVar6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    pdVar9 = (double *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  dVar14 = *pdVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = (long)(pdVar9 + 1);
  dVar15 = pdVar9[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = (long)(pdVar9 + 2);
  fVar16 = *(float *)(pdVar9 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = (long)((long)pdVar9 + 0x14);
  bVar3 = *(byte *)((long)pdVar9 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = (long)pdVar9 + 0x15;
  bVar4 = *(byte *)((long)pdVar9 + 0x15); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = (long)pdVar9 + 0x16;
  cVar5 = *(char *)((long)pdVar9 + 0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar10 = (uint *)((long)pdVar9 + 0x17); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = (long)puVar10;
  if (cVar5 != '\0') { // [自动静态注释] 条件判断/分支
    *(float *)(param_1 + 0x21) = fVar16;
    *(byte *)((long)param_1 + 0x11c) = *(byte *)((long)param_1 + 0x11c) | 4;
    dVar17 = (double)NEON_ucvtf((ulong)_DAT_008ab030); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar7 = (int)((dVar17 * 240.0) / ((double)bVar4 * (double)fVar16)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)((long)param_1 + 0x10c) = iVar7;
    *(uint *)(param_1 + 0x22) = iVar7 * (uint)bVar3;
    *(int *)((long)param_1 + 0x114) = (int)(dVar17 * 0.001 * dVar14);
    *(int *)(param_1 + 0x23) = (int)(dVar17 * 0.001 * dVar15);
    puVar10 = (uint *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar13 = *puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = (long)(puVar10 + 1);
  if (uVar13 != 0) { // [自动静态注释] 条件判断/分支
    lVar8 = FUN__text__00400f80(0,(ulong)uVar13 * 0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar8 == 0) { // [自动静态注释] 条件判断/分支
      return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar2 = *(undefined4 *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar1 = (undefined4 *)(lVar8 + lVar11); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar11 = lVar11 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar1 = uVar2;
      uVar2 = *(undefined4 *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar1[1] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = *(undefined4 *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar1[2] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = *(undefined4 *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar1[3] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = *(undefined4 *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar1[4] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = *(undefined4 *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      puVar1[5] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while ((ulong)uVar13 * 0x18 != lVar11); // [自动静态注释] 循环/迭代
    uVar6 = FUN__text__004f2840(param_1,lVar8,uVar13); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00400fc0(0,lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
    return uVar6 & 0xffffffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  plVar12 = (long *)param_1[0x24]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar12 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*plVar12 != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(plVar12 + 1) = 0;
    FUN__text__00400fc0(2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *plVar12 = 0;
    *(undefined4 *)((long)plVar12 + 0xc) = 0;
    plVar12 = (long *)param_1[0x24]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar12 == (long *)0x0) goto LAB__text__004f27f4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00400fc0(2,plVar12); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__004f27f4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  param_1[0x24] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


