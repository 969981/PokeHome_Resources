/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0048EA90
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058ea90; name: FUN_.text__0058ea90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__0058ea90(long param_1,int param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_64; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar6 = _DAT_008a3f58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar4 = *(byte *)(param_3 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar13 = (ulong)bVar4 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = *(ulong *)*param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(uint *)(_DAT_008a3f58 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
  uVar13 = uVar13 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_3 = *param_3 + uVar13 * 4;
  iVar7 = (uVar3 & (uint)(uVar12 >> ((ulong)bVar4 & 0x3f))) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar5 = iVar7 * 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar13;
  *(int *)(param_1 + 0x90) = iVar7;
  pvVar8 = (void *)FUN__text__00400f80(5,iVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(void **)(param_1 + 0xb8) = pvVar8;
  if (pvVar8 == (void *)0x0) { // [自动静态注释] 条件判断/分支
    return -0x85; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar11 = param_1 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset(pvVar8,0,(long)iVar5); // [自动静态注释] 内存复制、清零或移动
  iVar7 = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x90) * 0x48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_1 + 0x68) = iVar7;
  lVar9 = _DAT_008a3f60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0 < *(int *)(param_1 + 0x90)) { // [自动静态注释] 条件判断/分支
    lVar15 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar16 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar10 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_2 == 2) { // [自动静态注释] 条件判断/分支
      uVar10 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    do { // [自动静态注释] 循环/迭代
      bVar4 = *(byte *)(param_3 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar13 = (ulong)bVar4 + 10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar14 = uVar13 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar12 = *(ulong *)*param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = *(uint *)(lVar6 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
      *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
      *param_3 = *param_3 + uVar14 * 4;
      uVar13 = *(ulong *)(lVar9 + (uVar12 >> ((ulong)bVar4 & 0x3f) & (ulong)uVar3) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_70 = uVar13 & 0xfffffffffffffffc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = (uint)uVar13 & 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_64 = uVar3 + 0x36a; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_68 = (undefined1)(uVar3 << 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar7 = FUN__text__00588000(&local_70,*(long *)(param_1 + 0xb8) + lVar15,lVar11,uVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (iVar7 != 0) { // [自动静态注释] 条件判断/分支
        return iVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar16 = lVar16 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar15 = lVar15 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar16 < *(int *)(param_1 + 0x90)); // [自动静态注释] 循环/迭代
    iVar7 = *(int *)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) - iVar7;
  lVar9 = FUN__text__00400f80(5); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(param_1 + 0x50) = lVar9;
  *(long *)(param_1 + 0x58) = lVar9;
  if (lVar9 == 0) { // [自动静态注释] 条件判断/分支
    return -0x8b; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar9 = param_1 + 0x78; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar4 = *(byte *)(param_3 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(uint *)(lVar6 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar14 = *(ulong *)*param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar13 = (ulong)bVar4 + 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = uVar13 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
  *param_3 = *param_3 + uVar12 * 4;
  iVar7 = (uVar3 & (uint)(uVar14 >> ((ulong)bVar4 & 0x3f))) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = iVar7 * 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar12;
  *(int *)(param_1 + 0x88) = iVar7;
  if ((uVar3 == 0) || (uVar1 = *(int *)(param_1 + 0x60) + uVar3, *(uint *)(param_1 + 100) < uVar1)) // [自动静态注释] 条件判断/分支
  { // [自动静态注释] 作用域/控制流边界
    pvVar8 = (void *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pvVar8 = *(void **)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 0x60) = uVar1;
    *(ulong *)(param_1 + 0x58) = (long)pvVar8 + (ulong)uVar3;
    if (pvVar8 != (void *)0x0) { // [自动静态注释] 条件判断/分支
      memset(pvVar8,0,(ulong)uVar3); // [自动静态注释] 内存复制、清零或移动
      iVar7 = *(int *)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(void **)(param_1 + 0xa8) = pvVar8;
  if (0 < iVar7) { // [自动静态注释] 条件判断/分支
    lVar15 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar16 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      iVar7 = FUN__text__00586490(*(long *)(param_1 + 0xa8) + lVar15,lVar9,param_3,lVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (iVar7 != 0) { // [自动静态注释] 条件判断/分支
        return -0x85; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar16 = lVar16 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar15 = lVar15 + 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar16 < *(int *)(param_1 + 0x88)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = *(uint *)(lVar6 + 0x18) & // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar13 = (ulong)*(byte *)(param_3 + 1) + 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = uVar13 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
  *param_3 = *param_3 + uVar12 * 4;
  iVar7 = uVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar12;
  *(int *)(param_1 + 0x8c) = iVar7;
  uVar1 = iVar7 * 0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar1 == 0) || (uVar2 = *(int *)(param_1 + 0x60) + uVar1, *(uint *)(param_1 + 100) < uVar2)) // [自动静态注释] 条件判断/分支
  { // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(param_1 + 0xb0) = 0;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar16 = *(long *)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 0x60) = uVar2;
    *(ulong *)(param_1 + 0x58) = lVar16 + (ulong)uVar1;
    *(long *)(param_1 + 0xb0) = lVar16;
  } // [自动静态注释] 作用域/控制流边界
  if (-1 < (int)uVar3) { // [自动静态注释] 条件判断/分支
    lVar15 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar16 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      iVar7 = FUN__text__0058d170(*(long *)(param_1 + 0xb0) + lVar15,lVar9,param_3,lVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (iVar7 != 0) { // [自动静态注释] 条件判断/分支
        return -0x85; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar16 = lVar16 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar15 = lVar15 + 0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar16 < *(int *)(param_1 + 0x8c)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = *(uint *)(lVar6 + 0x18) & // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar13 = (ulong)*(byte *)(param_3 + 1) + 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar12 = uVar13 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
  *param_3 = *param_3 + uVar12 * 4;
  iVar7 = uVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar12;
  *(int *)(param_1 + 0x84) = iVar7;
  uVar1 = iVar7 * 0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar1 == 0) || (uVar2 = *(int *)(param_1 + 0x60) + uVar1, *(uint *)(param_1 + 100) < uVar2)) // [自动静态注释] 条件判断/分支
  { // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(param_1 + 0xa0) = 0;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar16 = *(long *)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 0x60) = uVar2;
    *(ulong *)(param_1 + 0x58) = lVar16 + (ulong)uVar1;
    *(long *)(param_1 + 0xa0) = lVar16;
  } // [自动静态注释] 作用域/控制流边界
  if (-1 < (int)uVar3) { // [自动静态注释] 条件判断/分支
    lVar15 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar16 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      iVar7 = FUN__text__0058c680(*(long *)(param_1 + 0xa0) + lVar15,lVar9,param_2,param_3,lVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (iVar7 != 0) { // [自动静态注释] 条件判断/分支
        return -0x85; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar16 = lVar16 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar15 = lVar15 + 0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar16 < *(int *)(param_1 + 0x84)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  uVar13 = (ulong)*(byte *)(param_3 + 1) + 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(uint *)(lVar6 + 0x18) & // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar12 = uVar13 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
  *param_3 = *param_3 + uVar12 * 4;
  iVar7 = uVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar12;
  *(int *)(param_1 + 0x80) = iVar7;
  iVar7 = iVar7 * 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar7 != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = iVar7 + 3U & 0xfffffffc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = *(int *)(param_1 + 0x60) + uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar1 <= *(uint *)(param_1 + 100)) { // [自动静态注释] 条件判断/分支
      lVar11 = *(long *)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)(param_1 + 0x60) = uVar1;
      *(ulong *)(param_1 + 0x58) = lVar11 + (ulong)uVar2;
      *(long *)(param_1 + 0x98) = lVar11;
      goto joined_r0x0058f010; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x98) = 0;
joined_r0x0058f010: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (-1 < (int)uVar3) { // [自动静态注释] 条件判断/分支
    lVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      bVar4 = *(byte *)(param_3 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = *(uint *)*param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar13 = (ulong)bVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar12 = uVar13 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
      *param_3 = (long)((uint *)*param_3 + uVar12);
      *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar12;
      *(byte *)(*(long *)(param_1 + 0x98) + lVar9) = (byte)(uVar3 >> (ulong)(bVar4 & 0x1f)) & 1;
      bVar4 = *(byte *)(param_3 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar10 = *(undefined4 *)(lVar6 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar12 = *(ulong *)*param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar13 = (ulong)bVar4 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar14 = uVar13 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)(param_3 + 1) = (byte)uVar13 & 0x1f;
      *param_3 = *param_3 + uVar14 * 4;
      *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar14;
      *(byte *)(*(long *)(param_1 + 0x98) + lVar9 + 1) =
           (byte)uVar10 & (byte)(uVar12 >> ((ulong)bVar4 & 0x3f)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*(int *)(param_1 + 0x84) <= (int)(uint)*(byte *)(*(long *)(param_1 + 0x98) + lVar9 + 1)) { // [自动静态注释] 条件判断/分支
        return -0x85; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar11 = lVar11 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar9 = lVar9 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar11 < *(int *)(param_1 + 0x80)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


