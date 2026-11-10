/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00570E7C
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00670e7c; name: FUN_.text__00670e7c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__00670e7c(long param_1,undefined1 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar14 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_2 = 0;
  FUN__text__006783e4(*(undefined8 *)(param_1 + 0x1e8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  FUN__text__006783e4(*(undefined8 *)(param_1 + 0x1d0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  memset((void *)(param_1 + 0xf0),0,0x578); // [自动静态注释] 内存复制、清零或移动
  *(undefined8 *)(param_1 + 0xf8) = 0xffffffffffffffff;
  FUN__text__0065ca70(*(undefined8 *)(param_1 + 0xd8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0065ca7c(*(undefined8 *)(param_1 + 0xd8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_2 = 0;
  if (*(long *)(param_1 + 0xf48) == 0) { // [自动静态注释] 条件判断/分支
    plVar9 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar12 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    goto LAB__text__00671208; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar9 = (long *)FUN__text__00678414(1,0x670); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar9 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    lVar13 = *(long *)(*_DAT_008a6598 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar10 = FUN__text__00678414(4,lVar13); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar10 != 0) { // [自动静态注释] 条件判断/分支
      plVar9[0x5e] = lVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar9[0x56] = lVar10 + lVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar9[0x53] = lVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar9[0xc] = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar9[0x32] = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar9[0x59] = lVar10 + lVar13 * 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar9[0x5c] = lVar10 + lVar13 * 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar9[0x84] = 0x89a288; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar9[0x4b] = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(plVar9 + 0x33) = 0xffffffff;
      plVar9[0x4c] = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__00650d38(plVar9,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      auVar14 = FUN__text__0066c6a8(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 (*) [16])(plVar9 + 0x49) = auVar14;
      auVar14 = FUN__text__0066c6a8(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 (*) [16])(plVar9 + 0x87) = auVar14;
      lVar10 = *(long *)(param_1 + 0xf10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *plVar9 = param_1;
      plVar9[0x89] = lVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar12 = *(uint *)(param_1 + 0xc00); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(plVar9 + 0x27) = 4;
      *(uint *)(plVar9 + 0x2f) = uVar12;
      if ((*(char **)(param_1 + 0xd28) == (char *)0x0) || (**(char **)(param_1 + 0xd28) == '\0')) { // [自动静态注释] 条件判断/分支
        uVar12 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar8 = *(uint *)((long)plVar9 + 0x3fc) & 0xffffffef; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar8 = *(uint *)((long)plVar9 + 0x3fc) | 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar12 < 2) { // [自动静态注释] 条件判断/分支
          uVar12 = 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar12 = (uint)(uVar12 == 2) << 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      uVar12 = uVar8 & 0xffffff9f | uVar12 | (uVar12 << 1 ^ 0x40) & (int)(uVar8 << 0x1b) >> 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)plVar9 + 0x3fc) = uVar12;
      if ((*(char **)(param_1 + 0xd30) != (char *)0x0) && (**(char **)(param_1 + 0xd30) != '\0')) { // [自动静态注释] 条件判断/分支
        uVar12 = uVar12 | 0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(uint *)((long)plVar9 + 0x3fc) = uVar12;
      } // [自动静态注释] 作用域/控制流边界
      bVar6 = *(byte *)((long)plVar9 + 0x371); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar8 = (uint)(*(long *)(param_1 + 0xdf8) != 0) << 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = uVar12 & 0xff | uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)plVar9 + 0x3fc) = uVar12 & 0xfffffe00 | uVar3;
      uVar7 = (*(uint *)(param_1 + 0xf40) >> 10 & 1) << 0xe; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = uVar12 & 0xffff8000 | uVar12 & 0x3e00 | uVar3 | uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)plVar9 + 0x3fc) = uVar4;
      uVar3 = uVar12 & 0x7f | (uint)(*(long *)(param_1 + 0xde0) != 0) << 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)plVar9 + 0x3fc) =
           uVar12 & 0xffff8000 | uVar12 & 0x3e00 | uVar8 | uVar7 | uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar8 = uVar4 & 0x1ff00 | uVar3 | (*(uint *)(param_1 + 0xf40) >> 0x1e & 1) << 0x11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)plVar9 + 0x3fc) = uVar12 & 0xfffc0000 | uVar8;
      uVar8 = uVar8 | (*(uint *)(param_1 + 0xf40) >> 0x1f) << 0x12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)plVar9 + 0x3fc) = uVar12 & 0xfff80000 | uVar8;
      bVar1 = (*(byte *)(param_1 + 0xac1) >> 2 & 1) << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar2 = bVar6 & 0xf8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)((long)plVar9 + 0x371) = bVar2 | bVar6 & 3 | bVar1;
      bVar5 = *(byte *)(param_1 + 0xac1) & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)((long)plVar9 + 0x371) = bVar2 | bVar6 & 2 | bVar1 | bVar5;
      bVar6 = *(byte *)((long)plVar9 + 0x3f1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)((long)plVar9 + 0x371) = bVar2 | bVar1 | bVar5 | *(byte *)(param_1 + 0xac1) & 2;
      bVar1 = (*(byte *)(param_1 + 0xb99) >> 2 & 1) << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar2 = bVar6 & 0xf8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)((long)plVar9 + 0x3f1) = bVar2 | bVar6 & 3 | bVar1;
      bVar5 = *(byte *)(param_1 + 0xb99) & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)((long)plVar9 + 0x3f1) = bVar2 | bVar6 & 2 | bVar1 | bVar5;
      *(byte *)((long)plVar9 + 0x3f1) = bVar2 | bVar1 | bVar5 | *(byte *)(param_1 + 0xb99) & 2;
      plVar9[0x86] = *(long *)(param_1 + 0xc30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)plVar9 + 0x3fc) =
           (uint)(*(ulong *)(param_1 + 0xf40) >> 7) & 0x80000000 | uVar12 & 0x7ff80000 | uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar11 = FUN__text__0065ab48(*(undefined8 *)(param_1 + 0xd8),1); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (((uVar11 & 1) == 0) || (plVar9[0x9d] != 0)) { // [自动静态注释] 条件判断/分支
code_r0x00671160: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__00656b14(plVar9 + 0x95,&DAT__text__00673788); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__00656b14(plVar9 + 0x99,&DAT__text__00673788); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (*(long *)(param_1 + 0xcc0) != 0) { // [自动静态注释] 条件判断/分支
          lVar10 = FUN__text__00678404(); // [自动静态注释] 调用尚未恢复正式名称的函数
          plVar9[0xc9] = lVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (lVar10 == 0) goto LAB__text__006711c8; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        *(undefined4 *)((long)plVar9 + 0x654) = *(undefined4 *)(param_1 + 0x704);
        *(undefined2 *)(plVar9 + 0xca) = *(undefined2 *)(param_1 + 0x700);
        plVar9[10] = *(long *)(param_1 + 0x768); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar9[0xb] = *(long *)(param_1 + 0x770); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__006700b8(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
        lVar10 = *(long *)(param_1 + 0xf28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (lVar10 == 0) { // [自动静态注释] 条件判断/分支
          lVar10 = FUN__text__0066e3d8(); // [自动静态注释] 调用尚未恢复正式名称的函数
          *(long *)(param_1 + 0x1548) = lVar10;
          if (lVar10 == 0) goto LAB__text__00671204; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(long *)(param_1 + 0x1548) = lVar10;
        } // [自动静态注释] 作用域/控制流边界
        if ((*(long *)(param_1 + 0xcb8) != 0) && // [自动静态注释] 条件判断/分支
           (uVar11 = FUN__text__0066e310(*(undefined8 *)(param_1 + 0xf48),0,8), (uVar11 & 1) == 0)) // [自动静态注释] 调用尚未恢复正式名称的函数
        { // [自动静态注释] 作用域/控制流边界
          if ((*(byte *)(param_1 + 0xf68) & 1) != 0) { // [自动静态注释] 条件判断/分支
            FUN__text__006783e4(*(undefined8 *)(param_1 + 0xf48)); // [自动静态注释] 调用尚未恢复正式名称的函数
          } // [自动静态注释] 作用域/控制流边界
          lVar13 = FUN__text__00659a28(0x70ca5a,*(undefined8 *)(param_1 + 0xcb8), // [自动静态注释] 调用尚未恢复正式名称的函数
                                       *(undefined8 *)(param_1 + 0xf48));
          if (lVar13 == 0) goto LAB__text__00671204; // [自动静态注释] 条件判断/分支
          *(long *)(param_1 + 0xf48) = lVar13;
          *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) | 1;
        } // [自动静态注释] 作用域/控制流边界
        if (*(long *)(param_1 + 0xf28) == 0) { // [自动静态注释] 条件判断/分支
          uVar12 = (uint)((ulong)*(undefined8 *)(param_1 + 0xf40) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar8 = FUN__text__0066e9e4(lVar10,0,*(undefined8 *)(param_1 + 0xf48), // [自动静态注释] 调用尚未恢复正式名称的函数
                                      uVar12 >> 0xc & 0x10 | uVar12 >> 0x12 & 0x20 | 0x208); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar12 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (uVar8 < 9) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x00671368 */
                    /* WARNING: Treating indirect jump as call */
            uVar11 = (*(code *)((ulong)*(byte *)((ulong)uVar8 + 0x760cd1) * 4 + 0x671204))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            return uVar11; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar8 = FUN__text__0066e580(lVar10,1,param_1 + 0x1550,0); // [自动静态注释] 调用尚未恢复正式名称的函数
          uVar12 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (uVar8 < 9) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x006712d0 */
                    /* WARNING: Treating indirect jump as call */
            uVar11 = (*(code *)((ulong)*(byte *)((ulong)uVar8 + 0x760cda) * 4 + 0x671204))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            return uVar11; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        goto LAB__text__00671208; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      lVar10 = FUN__text__00678414(0x4000,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      plVar9[0x9d] = lVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar10 != 0) goto code_r0x00671160; // [自动静态注释] 条件判断/分支
LAB__text__006711c8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00656c1c(plVar9 + 0x95,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00656c1c(plVar9 + 0x99,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006783e4(plVar9[0x9d]); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006783e4(plVar9[0xc9]); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006783e4(plVar9[0x5e]); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__006783e4(plVar9); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar9 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
LAB__text__00671204: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar12 = 0x1b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00671208: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (uVar12 != 0x59) { // [自动静态注释] 条件判断/分支
    if ((plVar9 == (long *)0x0) || (uVar12 == 0)) { // [自动静态注释] 条件判断/分支
      if (*(long *)(param_1 + 0x10) == 0) { // [自动静态注释] 条件判断/分支
        FUN__text__0065ab60(param_1,plVar9); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00670414(param_1,plVar9,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return (ulong)uVar12; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


