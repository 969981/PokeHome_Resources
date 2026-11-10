/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0048D170
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058d170; name: FUN_.text__0058d170
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0058d170(uint *param_1,long param_2,long *param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar8 = _DAT_008a3f58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar15 = *(byte *)(param_3 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = *(ulong *)*param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(uint *)(_DAT_008a3f58 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar14 = (ulong)bVar15 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar13 = uVar14 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_3 + 1) = (byte)uVar14 & 0x1f;
  *param_3 = *param_3 + uVar13 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
  *param_1 = uVar4 & (uint)(uVar12 >> ((ulong)bVar15 & 0x3f));
  bVar15 = *(byte *)(param_3 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(uint *)(lVar8 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = *(ulong *)*param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar14 = (ulong)bVar15 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar13 = uVar14 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_3 + 1) = (byte)uVar14 & 0x1f;
  *param_3 = *param_3 + uVar13 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
  param_1[6] = uVar4 & (uint)(uVar12 >> ((ulong)bVar15 & 0x3f)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar15 = *(byte *)(param_3 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(uint *)(lVar8 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = *(ulong *)*param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar14 = (ulong)bVar15 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar13 = uVar14 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_3 + 1) = (byte)uVar14 & 0x1f;
  *param_3 = *param_3 + uVar13 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
  param_1[7] = uVar4 & (uint)(uVar12 >> ((ulong)bVar15 & 0x3f)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar15 = *(byte *)(param_3 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(uint *)(lVar8 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = *(ulong *)*param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar14 = (ulong)bVar15 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar13 = uVar14 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_3 + 1) = (byte)uVar14 & 0x1f;
  *param_3 = *param_3 + uVar13 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
  param_1[8] = (uVar4 & (uint)(uVar12 >> ((ulong)bVar15 & 0x3f))) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar15 = *(byte *)(param_3 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *(undefined4 *)(lVar8 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = *(ulong *)*param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar14 = (ulong)bVar15 + 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar13 = uVar14 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_3 + 1) = (byte)uVar14 & 0x1f;
  *param_3 = *param_3 + uVar13 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
  *(byte *)(param_1 + 9) = ((byte)uVar5 & (byte)(uVar12 >> ((ulong)bVar15 & 0x3f))) + 1;
  uVar4 = *(uint *)(lVar8 + 0x20) & // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar14 = (ulong)*(byte *)(param_3 + 1) + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = uVar14 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_3 + 1) = (byte)uVar14 & 0x1f;
  *param_3 = *param_3 + uVar12 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar12;
  *(char *)((long)param_1 + 0x25) = (char)uVar4;
  if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) { // [自动静态注释] 条件判断/分支
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  bVar15 = (byte)param_1[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar15 == 0) { // [自动静态注释] 条件判断/分支
    param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0058d390: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = bVar15 + 3 & 0x1fc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = *(int *)(param_4 + 0x50) + uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(uint *)(param_4 + 0x54) < uVar4) { // [自动静态注释] 条件判断/分支
      param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar9 = *(long *)(param_4 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)(param_4 + 0x50) = uVar4;
      *(ulong *)(param_4 + 0x48) = lVar9 + (ulong)uVar3;
      *(long *)(param_1 + 2) = lVar9;
      bVar15 = (byte)param_1[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (bVar15 == 0) goto LAB__text__0058d390; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    puVar10 = param_1 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = *(int *)(param_4 + 0x50) + (uint)bVar15 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(uint *)(param_4 + 0x54) < uVar4) { // [自动静态注释] 条件判断/分支
      param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar9 = *(long *)(param_4 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)(param_4 + 0x50) = uVar4;
      *(ulong *)(param_4 + 0x48) = lVar9 + (ulong)((uint)bVar15 * 8);
      *(long *)(param_1 + 4) = lVar9;
      if ((char)param_1[9] == '\0') goto LAB__text__0058d8e8; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    puVar11 = param_1 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar12 = (ulong)*(byte *)(param_3 + 1) + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar13 = uVar12 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2 = (uint *)(*param_3 + uVar13 * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar15 = (byte)*(undefined4 *)(lVar8 + 0xc) & // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
               (byte)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar16 = (uint)uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = uVar16 & 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar7 = *(int *)((long)param_3 + 0xc) - (int)uVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(char *)(param_3 + 1) = (char)uVar4;
      *(int *)((long)param_3 + 0xc) = iVar7;
      uVar4 = uVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_3 = (long)puVar2;
      uVar6 = uVar4 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = uVar4 & 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = *puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar7 = iVar7 - uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1 = (ulong *)(puVar2 + uVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(char *)(param_3 + 1) = (char)uVar4;
      *(int *)((long)param_3 + 0xc) = iVar7;
      *param_3 = (long)puVar1;
      if ((uVar3 >> (ulong)(uVar16 & 0x1f) & 1) != 0) { // [自动静态注释] 条件判断/分支
        uVar3 = uVar4 + 5 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar15 = bVar15 | (byte)((*(uint *)(lVar8 + 0x14) & (uint)(*puVar1 >> uVar4)) << 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(byte *)(param_3 + 1) = (byte)(uVar4 + 5) & 0x1f;
        *(uint *)((long)param_3 + 0xc) = iVar7 - uVar3;
        *param_3 = (long)((long)puVar1 + (ulong)uVar3 * 4);
      } // [自动静态注释] 作用域/控制流边界
      *(byte *)(*(long *)(param_1 + 2) + uVar14) = bVar15;
      uVar14 = uVar14 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar14 < (byte)param_1[9]); // [自动静态注释] 循环/迭代
    if ((byte)param_1[9] != 0) { // [自动静态注释] 条件判断/分支
      uVar14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar9 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        if ((*(byte *)(*(long *)puVar10 + uVar14) & 1) == 0) { // [自动静态注释] 条件判断/分支
          *(undefined1 *)(*(long *)puVar11 + lVar9 + -3) = 0xff;
          bVar15 = *(byte *)(*(long *)puVar10 + uVar14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x0058d584: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if ((bVar15 >> 1 & 1) == 0) goto LAB__text__0058d568; // [自动静态注释] 条件判断/分支
LAB__text__0058d590: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar4 = *(uint *)(lVar8 + 0x20) & // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar12 = (ulong)*(byte *)(param_3 + 1) + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar13 = uVar12 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(byte *)(param_3 + 1) = (byte)uVar12 & 0x1f;
          *param_3 = *param_3 + uVar13 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) { // [自动静态注释] 条件判断/分支
            return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          *(char *)(*(long *)(param_1 + 4) + lVar9 + -2) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 2) { // [自动静态注释] 条件判断/分支
            *(undefined1 *)((long)param_1 + 0x26) = 2;
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar4 = *(uint *)(lVar8 + 0x20) & // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar12 = (ulong)*(byte *)(param_3 + 1) + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar13 = uVar12 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(byte *)(param_3 + 1) = (byte)uVar12 & 0x1f;
          *param_3 = *param_3 + uVar13 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) { // [自动静态注释] 条件判断/分支
            return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          *(char *)(*(long *)(param_1 + 4) + lVar9 + -3) = (char)uVar4;
          if (*(char *)((long)param_1 + 0x26) == '\0') { // [自动静态注释] 条件判断/分支
            *(undefined1 *)((long)param_1 + 0x26) = 1;
            bVar15 = *(byte *)(*(long *)puVar10 + uVar14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            goto joined_r0x0058d584; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          if ((*(byte *)(*(long *)puVar10 + uVar14) >> 1 & 1) != 0) goto LAB__text__0058d590; // [自动静态注释] 条件判断/分支
LAB__text__0058d568: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(undefined1 *)(*(long *)puVar11 + lVar9 + -2) = 0xff;
        } // [自动静态注释] 作用域/控制流边界
        if ((*(byte *)(*(long *)puVar10 + uVar14) >> 2 & 1) == 0) { // [自动静态注释] 条件判断/分支
          *(undefined1 *)(*(long *)puVar11 + lVar9 + -1) = 0xff;
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar4 = *(uint *)(lVar8 + 0x20) & // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar12 = (ulong)*(byte *)(param_3 + 1) + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar13 = uVar12 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(byte *)(param_3 + 1) = (byte)uVar12 & 0x1f;
          *param_3 = *param_3 + uVar13 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) { // [自动静态注释] 条件判断/分支
            return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          *(char *)(*(long *)(param_1 + 4) + lVar9 + -1) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 3) { // [自动静态注释] 条件判断/分支
            *(undefined1 *)((long)param_1 + 0x26) = 3;
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        if ((*(byte *)(*(long *)puVar10 + uVar14) >> 3 & 1) == 0) { // [自动静态注释] 条件判断/分支
          *(undefined1 *)(*(long *)puVar11 + lVar9) = 0xff;
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar4 = *(uint *)(lVar8 + 0x20) & // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar12 = (ulong)*(byte *)(param_3 + 1) + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar13 = uVar12 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(byte *)(param_3 + 1) = (byte)uVar12 & 0x1f;
          *param_3 = *param_3 + uVar13 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) { // [自动静态注释] 条件判断/分支
            return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          *(char *)(*(long *)(param_1 + 4) + lVar9) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 4) { // [自动静态注释] 条件判断/分支
            *(undefined1 *)((long)param_1 + 0x26) = 4;
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        if ((*(byte *)(*(long *)puVar10 + uVar14) >> 4 & 1) == 0) { // [自动静态注释] 条件判断/分支
          *(undefined1 *)(*(long *)puVar11 + lVar9 + 1) = 0xff;
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar4 = *(uint *)(lVar8 + 0x20) & // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar12 = (ulong)*(byte *)(param_3 + 1) + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar13 = uVar12 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(byte *)(param_3 + 1) = (byte)uVar12 & 0x1f;
          *param_3 = *param_3 + uVar13 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) { // [自动静态注释] 条件判断/分支
            return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          *(char *)(*(long *)(param_1 + 4) + lVar9 + 1) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 5) { // [自动静态注释] 条件判断/分支
            *(undefined1 *)((long)param_1 + 0x26) = 5;
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        if ((*(byte *)(*(long *)puVar10 + uVar14) >> 5 & 1) == 0) { // [自动静态注释] 条件判断/分支
          *(undefined1 *)(*(long *)puVar11 + lVar9 + 2) = 0xff;
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar4 = *(uint *)(lVar8 + 0x20) & // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar12 = (ulong)*(byte *)(param_3 + 1) + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar13 = uVar12 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(byte *)(param_3 + 1) = (byte)uVar12 & 0x1f;
          *param_3 = *param_3 + uVar13 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) { // [自动静态注释] 条件判断/分支
            return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          *(char *)(*(long *)(param_1 + 4) + lVar9 + 2) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 6) { // [自动静态注释] 条件判断/分支
            *(undefined1 *)((long)param_1 + 0x26) = 6;
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        if ((*(byte *)(*(long *)puVar10 + uVar14) >> 6 & 1) == 0) { // [自动静态注释] 条件判断/分支
          *(undefined1 *)(*(long *)puVar11 + lVar9 + 3) = 0xff;
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar4 = *(uint *)(lVar8 + 0x20) & // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar12 = (ulong)*(byte *)(param_3 + 1) + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar13 = uVar12 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(byte *)(param_3 + 1) = (byte)uVar12 & 0x1f;
          *param_3 = *param_3 + uVar13 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) { // [自动静态注释] 条件判断/分支
            return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          *(char *)(*(long *)(param_1 + 4) + lVar9 + 3) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 7) { // [自动静态注释] 条件判断/分支
            *(undefined1 *)((long)param_1 + 0x26) = 7;
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        if (*(char *)(*(long *)puVar10 + uVar14) < '\0') { // [自动静态注释] 条件判断/分支
          uVar4 = *(uint *)(lVar8 + 0x20) & // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar12 = (ulong)*(byte *)(param_3 + 1) + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar13 = uVar12 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(byte *)(param_3 + 1) = (byte)uVar12 & 0x1f;
          *param_3 = *param_3 + uVar13 * 4;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
          if (*(int *)(param_2 + 0x18) <= (int)(uVar4 & 0xff)) { // [自动静态注释] 条件判断/分支
            return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          *(char *)(*(long *)(param_1 + 4) + lVar9 + 4) = (char)uVar4;
          if (*(byte *)((long)param_1 + 0x26) < 8) { // [自动静态注释] 条件判断/分支
            *(undefined1 *)((long)param_1 + 0x26) = 8;
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(undefined1 *)(*(long *)puVar11 + lVar9 + 4) = 0xff;
        } // [自动静态注释] 作用域/控制流边界
        uVar14 = uVar14 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar9 = lVar9 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar14 < (byte)param_1[9]); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0058d8e8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(int *)((long)param_3 + 0xc) < 0) { // [自动静态注释] 条件判断/分支
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


