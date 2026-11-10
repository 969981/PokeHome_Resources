/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003DA3F0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004da3f0; name: FUN_.text__004da3f0
 */


/* WARNING: Removing unreachable block (ram,0x004da560) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004da3f0(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)((long)param_2 + 0x2c) == 0x11) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(param_1 + 0xf0) = 1;
  } // [自动静态注释] 作用域/控制流边界
  plVar1 = (long *)(param_1 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(short *)(param_1 + 0x92) == 0) { // [自动静态注释] 条件判断/分支
    if (*plVar1 == 0) { // [自动静态注释] 条件判断/分支
      if (*(short *)((long)param_2 + 0x12) == 0) goto LAB__text__004da5dc; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (**(code **)(**(long **)(param_1 + 8) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x94) = 0;
      *(undefined8 *)(param_1 + 0x8c) = 0x2b;
      *(undefined8 *)(param_1 + 0x9c) = 0x3f800000ffffffff;
      *(undefined8 *)(param_1 + 0xa4) = 0x1ffffffff;
      *param_2 = 0;
      *(undefined2 *)((long)param_2 + 0x12) = 0;
      *(undefined8 *)((long)param_2 + 0x14) = 0;
LAB__text__004da5dc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*(int *)((long)param_2 + 0x2c) == 0x2d) { // [自动静态注释] 条件判断/分支
        iVar9 = 0x2b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__004da770; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    lVar10 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar1 = *param_2;
    *(long *)(param_1 + 0x88) = lVar10;
    lVar12 = param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar10 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar11 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0xa8) = (int)param_2[5];
    *(long *)(param_1 + 0x98) = lVar11;
    *(long *)(param_1 + 0xa0) = lVar12;
    *(long *)(param_1 + 0x90) = lVar10;
    *(undefined8 *)((long)param_2 + 0x14) = 0;
    lVar10 = *(long *)(param_1 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar8 = _DAT_008a4b70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar10 = *(long *)(param_1 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar8 = _DAT_008a4b70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  _DAT_008a4b70 = puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar10 == 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x88);
    *(short *)(param_1 + 0xc0) = (short)*(undefined4 *)puVar8;
    iVar9 = FUN__text__0041ec00(param_1 + 0xb0); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar9 != 1) { // [自动静态注释] 条件判断/分支
      iVar9 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__004da770; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (*(char *)(param_1 + 0xf2) != '\0') { // [自动静态注释] 条件判断/分支
      fVar18 = *(float *)(*(long *)(param_1 + 0xe8) + 700); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar7 = (float)NEON_ucvtf((uint)*puVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar18 = ((float)*(int *)(*(long *)(param_1 + 0xe8) + 0x330) + fVar7 * fVar18) / fVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar17 = 0x3f00; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (fVar18 <= 0.0) { // [自动静态注释] 条件判断/分支
        uVar17 = 0xbf00; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar14 = (uint)((float)((uint)uVar17 << 0x10) + fVar18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (0 < (int)uVar14) { // [自动静态注释] 条件判断/分支
        bVar6 = *(byte *)(param_1 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (bVar6 != 0) { // [自动静态注释] 条件判断/分支
          __n = (ulong)uVar14 << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (bVar6 == 1) { // [自动静态注释] 条件判断/分支
            lVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            uVar15 = (ulong)bVar6 & 0xfe; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            lVar10 = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            do { // [自动静态注释] 循环/迭代
              lVar11 = lVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              memset((void *)(*(long *)(param_1 + 0xb0) + // [自动静态注释] 内存复制、清零或移动
                             (lVar11 + -4) * (ulong)*(ushort *)(param_1 + 0xc0)),0,__n); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              memset((void *)(*(long *)(param_1 + 0xb0) + // [自动静态注释] 内存复制、清零或移动
                             lVar11 * (ulong)*(ushort *)(param_1 + 0xc0)),0,__n); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              uVar15 = uVar15 - 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              lVar10 = lVar11 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } while (uVar15 != 0); // [自动静态注释] 循环/迭代
            lVar11 = lVar11 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          if ((bVar6 & 1) != 0) { // [自动静态注释] 条件判断/分支
            memset((void *)(*(long *)(param_1 + 0xb0) + lVar11 * (ulong)*(ushort *)(param_1 + 0xc0)) // [自动静态注释] 内存复制、清零或移动
                   ,0,__n); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        *(uint *)(param_1 + 0x3c) = uVar14;
      } // [自动静态注释] 作用域/控制流边界
      *(undefined1 *)(param_1 + 0xf2) = 0;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  plVar13 = (long *)(param_1 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar10 = *(long *)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2 = (uint *)(lVar10 + 0x313); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar17 = *(ushort *)(param_1 + 0x92); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((*puVar2 >> 0x16 & 1) == 0) && (iVar9 = *(int *)(lVar10 + 0x30c), iVar9 != 0)) { // [自动静态注释] 条件判断/分支
    if ((int)(uint)uVar17 <= iVar9) { // [自动静态注释] 条件判断/分支
      *(uint *)(lVar10 + 0x30c) = iVar9 - (uint)uVar17;
      *puVar2 = *puVar2 & 0xfe3fffff;
      *(undefined2 *)(param_1 + 0x92) = 0;
      *(undefined2 *)((long)param_2 + 0x12) = 0;
      (**(code **)(**(long **)(param_1 + 8) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x8c) = 0x2b;
      *(undefined8 *)(param_1 + 0x94) = 0;
      *(undefined8 *)(param_1 + 0x9c) = 0x3f800000ffffffff;
      *(undefined8 *)(param_1 + 0xa4) = 0x1ffffffff;
      *param_2 = 0;
      *(undefined2 *)((long)param_2 + 0x12) = 0;
      *(undefined8 *)((long)param_2 + 0x14) = 0;
      iVar9 = 0x2b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(char *)(param_1 + 0xf0) != '\0') { // [自动静态注释] 条件判断/分支
        iVar9 = 0x11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      goto LAB__text__004da770; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(int *)(param_1 + 0x38) = iVar9;
    *(ushort *)(param_1 + 0x92) = uVar17 - (short)iVar9;
    *(undefined4 *)(lVar10 + 0x30c) = 0;
    *puVar2 = *puVar2 & 0xfe3fffff;
    uVar17 = *(ushort *)(param_1 + 0x92); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  iVar4 = *(int *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar10 = param_1 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar9 = FUN__text__0041b380(lVar10,plVar1,plVar13); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar5 = *(int *)(*(long *)(param_1 + 0xe0) + 0x108); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar5 != 0) { // [自动静态注释] 条件判断/分支
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0xe0) + 0x100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004af620(uVar3,iVar5,plVar1,plVar13,iVar4,uVar17 - *(short *)(param_1 + 0x92)); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar5 = *(int *)(param_1 + 0x9c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((iVar5 == -1) || (*(char *)(param_1 + 0xf1) != '\0')) { // [自动静态注释] 条件判断/分支
    uVar16 = FUN__text__0041ac60(lVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 0xd0) = uVar16;
    if (*(short *)(param_1 + 0x92) == 0) goto LAB__text__004da6e4; // [自动静态注释] 条件判断/分支
LAB__text__004da4fc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((iVar9 != 0x2d) && (iVar9 != 0x11)) goto LAB__text__004da770; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(param_1 + 0x9c);
    *(int *)(param_1 + 0xcc) = iVar5 + iVar4;
    *(undefined8 *)(param_1 + 0xd4) = *(undefined8 *)(param_1 + 0xa4);
    *(undefined1 *)(param_1 + 0xf1) = 1;
    uVar16 = FUN__text__0041ac60(lVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 0xd0) = uVar16;
    if (*(short *)(param_1 + 0x92) != 0) goto LAB__text__004da4fc; // [自动静态注释] 条件判断/分支
LAB__text__004da6e4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(**(long **)(param_1 + 8) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x94) = 0;
    *(undefined8 *)(param_1 + 0x8c) = 0x2b;
    *(undefined8 *)(param_1 + 0x9c) = 0x3f800000ffffffff;
    *(undefined8 *)(param_1 + 0xa4) = 0x1ffffffff;
    *param_2 = 0;
    *(undefined2 *)((long)param_2 + 0x12) = 0;
    *(undefined8 *)((long)param_2 + 0x14) = 0;
    if (*(char *)(param_1 + 0xf0) == '\0') goto LAB__text__004da4fc; // [自动静态注释] 条件判断/分支
    if (*(long *)(*(long *)(param_1 + 0xe0) + 0xe8) != 0) { // [自动静态注释] 条件判断/分支
      iVar9 = FUN__text__0044fe08(*(long *)(param_1 + 0xe0),plVar13); // [自动静态注释] 调用尚未恢复正式名称的函数
      goto LAB__text__004da4fc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    iVar9 = 0x11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar10 = *(long *)(param_1 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = *plVar13;
  param_2[1] = lVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar12 = *(long *)(param_1 + 0xd0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar10 = *(long *)(param_1 + 0xc0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar11 = *(long *)(param_1 + 200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 0xd8);
  param_2[3] = lVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[4] = lVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[2] = lVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0xc4) = 0;
LAB__text__004da770: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(int *)((long)param_2 + 0x2c) = iVar9;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


