/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0058CB70
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068cb70; name: FUN_.text__0068cb70
 */


void FUN__text__0068cb70(long param_1,long *param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  short *psVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort *puVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_3 = param_3 & 0xffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar13 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_1 + 0x104) == '\0') { // [自动静态注释] 条件判断/分支
    pbVar10 = (byte *)(lVar13 + (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0xc)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uint)*(ushort *)(pbVar10 + 0xe) * (uint)*(ushort *)(pbVar10 + 0xc) != 0) { // [自动静态注释] 条件判断/分支
      uVar7 = param_3 / ((uint)*(ushort *)(pbVar10 + 0xe) * (uint)*(ushort *)(pbVar10 + 0xc)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (*(uint *)(pbVar10 + 0x14) == 0) { // [自动静态注释] 条件判断/分支
      lVar13 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar13 = lVar13 + (ulong)*(uint *)(pbVar10 + 0x14) + (ulong)(*(int *)(pbVar10 + 4) * uVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *param_2 = lVar13;
    *(undefined1 *)(param_2 + 5) = 0;
    param_2[4] = param_1 + 0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined2 *)((long)param_2 + 0x2c) = 0;
    *(ushort *)((long)param_2 + 0x2a) = (ushort)uVar7 & 0xff;
    lVar13 = *(long *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = *(uint *)(lVar13 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar7 != 0) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        puVar14 = (ushort *)(*(long *)(param_1 + 0x18) + (ulong)uVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((*puVar14 <= param_3) && (param_3 <= puVar14[1])) { // [自动静态注释] 条件判断/分支
          lVar13 = (long)puVar14 + ((ulong)param_3 - (ulong)*puVar14) * 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        uVar7 = *(uint *)(puVar14 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar7 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    *(short *)(param_2 + 1) = (short)*(char *)(lVar13 + 8);
    *(ushort *)((long)param_2 + 10) = (ushort)*(byte *)(lVar13 + 9);
    *(ushort *)((long)param_2 + 0xc) = (ushort)*(byte *)(lVar13 + 10);
    *(ushort *)((long)param_2 + 0xe) = (ushort)*(byte *)(lVar13 + 9);
    uVar4 = *(ushort *)(pbVar10 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar2 = *pbVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar12 = (uint)uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = *(ushort *)(pbVar10 + 0xe) * uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar7 != 0) { // [自动静态注释] 条件判断/分支
      uVar8 = param_3 / uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    param_3 = param_3 - uVar8 * uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    sVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar12 != 0) { // [自动静态注释] 条件判断/分支
      sVar9 = (short)((param_3 & 0xffff) / uVar12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    bVar3 = pbVar10[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(ushort *)(param_2 + 2) = (ushort)bVar3;
    sVar11 = (short)param_3 - sVar9 * uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    sVar9 = sVar9 + sVar9 * (ushort)bVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    sVar11 = sVar11 + sVar11 * (ushort)bVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(ushort *)((long)param_2 + 0x12) = (ushort)pbVar10[1];
    *(ushort *)((long)param_2 + 0x1c) = *(ushort *)(pbVar10 + 10) & 0x3fff;
    sVar15 = *(short *)(pbVar10 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pbVar10 = pbVar10 + 0x12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    psVar1 = (short *)(lVar13 + (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x10)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uint)(ushort)psVar1[9] * (uint)(ushort)psVar1[8] != 0) { // [自动静态注释] 条件判断/分支
      uVar7 = param_3 / ((uint)(ushort)psVar1[9] * (uint)(ushort)psVar1[8]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (*(uint *)(psVar1 + 0xc) == 0) { // [自动静态注释] 条件判断/分支
      lVar13 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar13 = lVar13 + (ulong)*(uint *)(psVar1 + 0xc) + (ulong)(*(int *)(psVar1 + 4) * uVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *param_2 = lVar13;
    *(short *)((long)param_2 + 0x2a) = (short)uVar7;
    param_2[4] = param_1 + 0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 *)(param_2 + 5) = 0;
    *(undefined2 *)((long)param_2 + 0x2c) = 0;
    uVar7 = *(uint *)(*(long *)(param_1 + 0x20) + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar7 != 0) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        puVar14 = (ushort *)(*(long *)(param_1 + 0x18) + (ulong)uVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((*puVar14 <= param_3) && (param_3 <= puVar14[1])) { // [自动静态注释] 条件判断/分支
          puVar14 = puVar14 + (long)(int)(param_3 - *puVar14) * 3 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          goto LAB__text__0068cc5c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        uVar7 = *(uint *)(puVar14 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar7 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    puVar14 = (ushort *)(*(long *)(param_1 + 0x20) + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0068cc5c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(ushort *)(param_2 + 1) = *puVar14;
    *(ushort *)((long)param_2 + 10) = puVar14[1];
    *(ushort *)((long)param_2 + 0xc) = puVar14[2];
    *(ushort *)((long)param_2 + 0xe) = puVar14[1];
    uVar4 = psVar1[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    sVar15 = *psVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar12 = (uint)uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = (ushort)psVar1[9] * uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar7 != 0) { // [自动静态注释] 条件判断/分支
      uVar8 = param_3 / uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    param_3 = param_3 - uVar8 * uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    sVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar12 != 0) { // [自动静态注释] 条件判断/分支
      sVar9 = (short)((param_3 & 0xffff) / uVar12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    sVar5 = psVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(short *)(param_2 + 2) = sVar5;
    sVar11 = (short)param_3 - sVar9 * uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    sVar9 = sVar9 + sVar9 * sVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    sVar11 = sVar11 + sVar11 * sVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(short *)((long)param_2 + 0x12) = psVar1[1];
    *(ushort *)((long)param_2 + 0x1c) = psVar1[7] & 0x3fff;
    sVar15 = psVar1[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pbVar10 = (byte *)(psVar1 + 0xb); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(short *)((long)param_2 + 0x14) = sVar15;
  uVar6 = *(undefined2 *)pbVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(short *)((long)param_2 + 0x1a) = sVar9 + 1;
  *(undefined2 *)((long)param_2 + 0x16) = uVar6;
  *(short *)(param_2 + 3) = sVar11 + 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


