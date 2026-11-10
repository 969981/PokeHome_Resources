/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00115FE0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00215fe0; name: FUN_.text__00215fe0
 */


bool FUN__text__00215fe0(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar23; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar25; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar26; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar27; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar29; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar28 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar21 = *(long *)(param_1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (lVar21 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(param_1 + 0x50) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 0x50),lVar21,*(undefined8 *)(param_1 + 0x58), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(undefined8 *)(param_1 + 0x60));
    lVar21 = *(long *)(param_1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (lVar21 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(**(long **)(param_1 + 0x50) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(param_1 + 0x50),lVar21,*(undefined8 *)(param_1 + 0x58), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(param_1 + 0x60));
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  puVar26 = (undefined8 *)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar26 = 0;
  lVar21 = *(long *)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (lVar21 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 0xf0),lVar21,*(undefined8 *)(param_1 + 0xf8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(undefined8 *)(param_1 + 0x100));
    lVar21 = *(long *)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0xe8) = 0;
    if (lVar21 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(**(long **)(param_1 + 0xf0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(param_1 + 0xf0),lVar21,*(undefined8 *)(param_1 + 0xf8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(param_1 + 0x100));
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  pvVar20 = (void *)(**(code **)(*param_2 + 0x10))(param_2,0xd900,1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar27 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar27 = uVar27 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar27 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
    *(long **)(uVar27 + 0x18 + *(long *)(uVar27 + 0x98) * 8) = param_2;
    *(long *)(uVar27 + 0x98) = *(long *)(uVar27 + 0x98) + 1;
    memset(pvVar20,0,0xd900); // [自动静态注释] 内存复制、清零或移动
    *(long *)(uVar27 + 0x98) = *(long *)(uVar27 + 0x98) + -1;
    lVar21 = *(long *)(param_1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(void **)(param_1 + 0x48) = pvVar20;
    if (lVar21 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(**(long **)(param_1 + 0x50) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(param_1 + 0x50),lVar21,*(undefined8 *)(param_1 + 0x58), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(param_1 + 0x60));
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(param_1 + 0x50) = param_2;
    *(undefined8 *)(param_1 + 0x58) = 0xd900;
    *(undefined8 *)(param_1 + 0x60) = 1;
    pvVar20 = (void *)(**(code **)(*param_2 + 0x10))(param_2,0xd900,1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar27 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
      *(long **)(uVar27 + 0x18 + *(long *)(uVar27 + 0x98) * 8) = param_2;
      *(long *)(uVar27 + 0x98) = *(long *)(uVar27 + 0x98) + 1;
      memset(pvVar20,0,0xd900); // [自动静态注释] 内存复制、清零或移动
      *(long *)(uVar27 + 0x98) = *(long *)(uVar27 + 0x98) + -1;
      lVar21 = *(long *)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(void **)(param_1 + 0xe8) = pvVar20;
      if (lVar21 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(**(long **)(param_1 + 0xf0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (*(long **)(param_1 + 0xf0),lVar21,*(undefined8 *)(param_1 + 0xf8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   *(undefined8 *)(param_1 + 0x100));
      } // [自动静态注释] 作用域/控制流边界
      pcVar1 = (char *)(param_1 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar25 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pcVar2 = (char *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0xf0) = param_2;
      *(undefined8 *)(param_1 + 0xf8) = 0xd900;
      *(undefined8 *)(param_1 + 0x100) = 1;
      lVar21 = lVar28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar27 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        pvVar20 = (void *)(lVar28 + uVar27 * 0x1000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(int *)((long)pvVar20 + 0xff8) == 0x8012025) { // [自动静态注释] 条件判断/分支
          pcVar29 = pcVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*pcVar2 == '\0') { // [自动静态注释] 条件判断/分支
            iVar18 = *(int *)((long)pvVar20 + 0xffc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(int *)(param_1 + 0x3c) = iVar18;
            iVar23 = *(int *)((long)pvVar20 + 0xffc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (iVar23 != iVar18) goto LAB__text__002162bc; // [自动静态注释] 条件判断/分支
          } // [自动静态注释] 作用域/控制流边界
          else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            if ((*(char *)(param_1 + 0xd8) == '\0') && // [自动静态注释] 条件判断/分支
               (*(int *)((long)pvVar20 + 0xffc) != *(int *)(param_1 + 0x3c))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(int *)(param_1 + 0xdc) = *(int *)((long)pvVar20 + 0xffc);
            } // [自动静态注释] 作用域/控制流边界
            iVar23 = *(int *)((long)pvVar20 + 0xffc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (iVar23 != *(int *)(param_1 + 0x3c)) { // [自动静态注释] 条件判断/分支
LAB__text__002162bc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              pcVar29 = pcVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (iVar23 != *(int *)(param_1 + 0xdc)) { // [自动静态注释] 条件判断/分支
                return bVar25; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
              } // [自动静态注释] 作用域/控制流边界
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
          pcVar29[0] = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          pcVar29[1] = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (0xd < (ulong)*(ushort *)((long)pvVar20 + 0xff4)) { // [自动静态注释] 条件判断/分支
LAB__text__00216368: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            *pcVar29 = '\0';
            return bVar25; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          memcpy((void *)(*(long *)(pcVar29 + 0x10) + // [自动静态注释] 内存复制、清零或移动
                         (ulong)*(ushort *)((long)pvVar20 + 0xff4) * 0xf80),pvVar20,0xf80); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          lVar24 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          iVar23 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(int *)(pcVar29 + 8) = *(int *)(pcVar29 + 8) + 0xf80;
          *(uint *)(pcVar29 + (ulong)*(ushort *)((long)pvVar20 + 0xff4) * 4 + 0x30) =
               (uint)*(ushort *)((long)pvVar20 + 0xff6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          while( true ) { // [自动静态注释] 循环/迭代
            piVar5 = (int *)(lVar21 + lVar24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar4 = piVar5[4] + piVar5[3] + piVar5[2] + piVar5[1] + *piVar5 + iVar23; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if ((int)lVar24 == 0xfe0) break; // [自动静态注释] 条件判断/分支
            lVar24 = lVar24 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            iVar23 = piVar5[7] + piVar5[6] + piVar5[5] + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          *(uint *)(pcVar29 + (ulong)*(ushort *)((long)pvVar20 + 0xff4) * 4 + 0x68) =
               uVar4 + (uVar4 >> 0x10) & 0xffff; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          lVar24 = (ulong)*(ushort *)((long)pvVar20 + 0xff4) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(int *)(pcVar29 + lVar24 + 0x30) != *(int *)(pcVar29 + lVar24 + 0x68)) // [自动静态注释] 条件判断/分支
          goto LAB__text__00216368; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        uVar3 = uVar27 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar21 = lVar21 + 0x1000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar25 = 0x1a < uVar27; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar27 = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar3 == 0x1c) { // [自动静态注释] 条件判断/分支
          *(undefined4 *)(param_1 + 0x30) = 0xd900;
          if (*(char *)(param_1 + 0xd8) != '\0') { // [自动静态注释] 条件判断/分支
            if ((*(uint *)(param_1 + 0x3c) < *(uint *)(param_1 + 0xdc)) && // [自动静态注释] 条件判断/分支
               (((*(uint *)(param_1 + 0xdc) != 0xffffffff || (*(uint *)(param_1 + 0x3c) != 0)) || // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*pcVar2 == '\0')))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              uVar22 = *(undefined8 *)pcVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar19 = *(undefined4 *)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar6 = *(undefined8 *)(param_1 + 200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar12 = *(undefined8 *)(param_1 + 0xd0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar7 = *(undefined8 *)(param_1 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar13 = *(undefined8 *)(param_1 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar8 = *(undefined8 *)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar14 = *(undefined8 *)(param_1 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar9 = *puVar26; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar15 = *(undefined8 *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(undefined8 *)pcVar2 = *(undefined8 *)pcVar1;
              *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0xe0);
              uVar10 = *(undefined8 *)(param_1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar16 = *(undefined8 *)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0xe8);
              uVar11 = *(undefined8 *)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar17 = *(undefined8 *)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0xf0);
              *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0xf8);
              *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x100);
              *(undefined8 *)(param_1 + 0xe8) = uVar10;
              *(undefined8 *)(param_1 + 0xf0) = uVar16;
              *(undefined8 *)(param_1 + 0xf8) = uVar11;
              *(undefined8 *)(param_1 + 0x100) = uVar17;
              *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x168);
              *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x170);
              uVar10 = *(undefined8 *)(param_1 + 0x158); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar11 = *(undefined8 *)(param_1 + 0x160); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0xb8);
              *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0xc0);
              *(undefined8 *)(param_1 + 0xb8) = uVar10;
              *(undefined8 *)(param_1 + 0xc0) = uVar11;
              *(undefined8 *)(param_1 + 0x168) = uVar6;
              *(undefined8 *)(param_1 + 0x170) = uVar12;
              *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x148);
              *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x150);
              uVar6 = *(undefined8 *)(param_1 + 0x138); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar10 = *(undefined8 *)(param_1 + 0x140); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x98);
              *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_1 + 0xa0);
              *(undefined8 *)(param_1 + 0x98) = uVar6;
              *(undefined8 *)(param_1 + 0xa0) = uVar10;
              *(undefined8 *)(param_1 + 0x148) = uVar7;
              *(undefined8 *)(param_1 + 0x150) = uVar13;
              *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x128);
              *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x130);
              uVar6 = *(undefined8 *)(param_1 + 0x118); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar7 = *(undefined8 *)(param_1 + 0x120); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x78);
              *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x80);
              *(undefined8 *)(param_1 + 0x78) = uVar6;
              *(undefined8 *)(param_1 + 0x80) = uVar7;
              *(undefined8 *)(param_1 + 0x128) = uVar8;
              *(undefined8 *)(param_1 + 0x130) = uVar14;
              *puVar26 = *(undefined8 *)(param_1 + 0x108);
              *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x110);
              *(undefined8 *)(param_1 + 0x108) = uVar9;
              *(undefined8 *)(param_1 + 0x110) = uVar15;
              *(undefined8 *)pcVar1 = uVar22;
              *(undefined4 *)(param_1 + 0xe0) = uVar19;
            } // [自动静态注释] 作用域/控制流边界
          } // [自动静态注释] 作用域/控制流边界
          return bVar25; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
} // [自动静态注释] 作用域/控制流边界


