/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B0140
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b0140; name: FUN_.text__006b0140
 */


void FUN__text__006b0140(undefined8 param_1,long param_2,long param_3,ushort param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_3 != 0) && (param_4 != 0)) { // [自动静态注释] 条件判断/分支
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      puVar1 = (uint *)(param_3 + lVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = (ulong)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pcVar2 = (char *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*puVar1 != 0) { // [自动静态注释] 条件判断/分支
        pcVar2 = (char *)((long)puVar1 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      iVar3 = strcmp((char *)0x71fc02,pcVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar3 == 0) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        *(undefined4 *)(param_2 + 0x134) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 4);
        uVar5 = (ulong)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      pcVar2 = (char *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((int)uVar5 != 0) { // [自动静态注释] 条件判断/分支
        pcVar2 = (char *)((long)puVar1 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      iVar3 = strcmp((char *)0x71a6cd,pcVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar3 == 0) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(param_2 + 0x140) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        *(undefined4 *)(param_2 + 0x144) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 4);
        uVar5 = (ulong)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      pcVar2 = (char *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((int)uVar5 != 0) { // [自动静态注释] 条件判断/分支
        pcVar2 = (char *)((long)puVar1 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      iVar3 = strcmp((char *)0x70cbb1,pcVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar3 == 0) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(param_2 + 0x150) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        *(undefined4 *)(param_2 + 0x154) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 4);
        uVar5 = (ulong)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      pcVar2 = (char *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((int)uVar5 != 0) { // [自动静态注释] 条件判断/分支
        pcVar2 = (char *)((long)puVar1 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      iVar3 = strcmp((char *)0x71d6a0,pcVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar3 == 0) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(param_2 + 0x160) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        *(undefined4 *)(param_2 + 0x164) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 4);
        uVar5 = (ulong)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      pcVar2 = (char *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((int)uVar5 != 0) { // [自动静态注释] 条件判断/分支
        pcVar2 = (char *)((long)puVar1 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      iVar3 = strcmp((char *)0x71b311,pcVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar3 == 0) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(param_2 + 0x170) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        *(undefined4 *)(param_2 + 0x174) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 4);
        *(undefined4 *)(param_2 + 0x178) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 8);
        uVar5 = (ulong)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      pcVar2 = (char *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((int)uVar5 != 0) { // [自动静态注释] 条件判断/分支
        pcVar2 = (char *)((long)puVar1 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      iVar3 = strcmp((char *)0x70cbbe,pcVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar3 == 0) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(param_2 + 0x180) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        *(undefined4 *)(param_2 + 0x184) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 4);
        *(undefined4 *)(param_2 + 0x188) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 8);
        uVar5 = (ulong)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      pcVar2 = (char *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((int)uVar5 != 0) { // [自动静态注释] 条件判断/分支
        pcVar2 = (char *)((long)puVar1 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      iVar3 = strcmp((char *)0x71b31e,pcVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar3 == 0) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(param_2 + 400) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        *(undefined4 *)(param_2 + 0x194) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 4);
        *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 8);
        uVar5 = (ulong)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      pcVar2 = (char *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((int)uVar5 != 0) { // [自动静态注释] 条件判断/分支
        pcVar2 = (char *)((long)puVar1 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      iVar3 = strcmp((char *)0x714c35,pcVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar3 == 0) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        *(undefined4 *)(param_2 + 0x1a4) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 4);
        *(undefined4 *)(param_2 + 0x1a8) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 8);
        uVar5 = (ulong)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      pcVar2 = (char *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((int)uVar5 != 0) { // [自动静态注释] 条件判断/分支
        pcVar2 = (char *)((long)puVar1 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      iVar3 = strcmp((char *)0x71e1a8,pcVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar3 == 0) { // [自动静态注释] 条件判断/分支
        *(float *)(param_2 + 0x1b0) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1]) / 255.0;
        *(float *)(param_2 + 0x1b4) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 4) / 255.0;
        *(float *)(param_2 + 0x1b8) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 8) / 255.0;
        *(float *)(param_2 + 0x1bc) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 0xc) / 255.0
        ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar5 = (ulong)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      pcVar2 = (char *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((int)uVar5 != 0) { // [自动静态注释] 条件判断/分支
        pcVar2 = (char *)((long)puVar1 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      iVar3 = strcmp((char *)0x71ed36,pcVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar3 == 0) { // [自动静态注释] 条件判断/分支
        *(float *)(param_2 + 0x1c0) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1]) / 255.0;
        *(float *)(param_2 + 0x1c4) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 4) / 255.0;
        *(float *)(param_2 + 0x1c8) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 8) / 255.0;
        *(float *)(param_2 + 0x1cc) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 0xc) / 255.0
        ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar5 = (ulong)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      pcVar2 = (char *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((int)uVar5 != 0) { // [自动静态注释] 条件判断/分支
        pcVar2 = (char *)((long)puVar1 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      iVar3 = strcmp((char *)0x70d6e9,pcVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar3 == 0) { // [自动静态注释] 条件判断/分支
        *(float *)(param_2 + 0x1d0) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1]) / 255.0;
        *(float *)(param_2 + 0x1d4) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 4) / 255.0;
        *(float *)(param_2 + 0x1d8) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 8) / 255.0;
        *(float *)(param_2 + 0x1dc) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 0xc) / 255.0
        ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar5 = (ulong)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      pcVar2 = (char *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((int)uVar5 != 0) { // [自动静态注释] 条件判断/分支
        pcVar2 = (char *)((long)puVar1 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      iVar3 = strcmp((char *)0x71165c,pcVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar3 == 0) { // [自动静态注释] 条件判断/分支
        *(float *)(param_2 + 0x1e0) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1]) / 255.0;
        *(float *)(param_2 + 0x1e4) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 4) / 255.0;
        *(float *)(param_2 + 0x1e8) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 8) / 255.0;
        *(float *)(param_2 + 0x1ec) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 0xc) / 255.0
        ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar5 = (ulong)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      pcVar2 = (char *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((int)uVar5 != 0) { // [自动静态注释] 条件判断/分支
        pcVar2 = (char *)((long)puVar1 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      iVar3 = strcmp((char *)0x71b32b,pcVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar3 == 0) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        uVar5 = (ulong)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pcVar2 = (char *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*puVar1 != 0) { // [自动静态注释] 条件判断/分支
          pcVar2 = (char *)((long)puVar1 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        iVar3 = strcmp((char *)0x714c42,pcVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (iVar3 == 0) goto LAB__text__006b0668; // [自动静态注释] 条件判断/分支
LAB__text__006b0608: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pcVar2 = (char *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((int)uVar5 != 0) { // [自动静态注释] 条件判断/分支
          pcVar2 = (char *)((long)puVar1 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        iVar3 = strcmp((char *)0x718f98,pcVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (iVar3 != 0) goto LAB__text__006b0620; // [自动静态注释] 条件判断/分支
LAB__text__006b0690: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        pcVar2 = (char *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*puVar1 != 0) { // [自动静态注释] 条件判断/分支
          pcVar2 = (char *)((long)puVar1 + (ulong)*puVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        iVar3 = strcmp((char *)0x7178d0,pcVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pcVar2 = (char *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((int)uVar5 != 0) { // [自动静态注释] 条件判断/分支
          pcVar2 = (char *)((long)puVar1 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        iVar3 = strcmp((char *)0x714c42,pcVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (iVar3 != 0) goto LAB__text__006b0608; // [自动静态注释] 条件判断/分支
LAB__text__006b0668: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined4 *)(param_2 + 0x124) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        uVar5 = (ulong)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pcVar2 = (char *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*puVar1 != 0) { // [自动静态注释] 条件判断/分支
          pcVar2 = (char *)((long)puVar1 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        iVar3 = strcmp((char *)0x718f98,pcVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (iVar3 == 0) goto LAB__text__006b0690; // [自动静态注释] 条件判断/分支
LAB__text__006b0620: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        pcVar2 = (char *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((int)uVar5 != 0) { // [自动静态注释] 条件判断/分支
          pcVar2 = (char *)((long)puVar1 + uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        iVar3 = strcmp((char *)0x7178d0,pcVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (iVar3 == 0) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(param_2 + 300) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4);
      } // [自动静态注释] 作用域/控制流边界
      lVar4 = lVar4 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (((uint)param_4 + (uint)param_4 * 2) * 4 != (int)lVar4); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


