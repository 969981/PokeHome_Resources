/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00590500
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00690500; name: FUN_.text__00690500
 */


void FUN__text__00690500(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar23; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar25; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar26; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar27; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar29; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_78 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short local_74 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long **)(param_1 + 0x58) != (long *)(param_1 + 0x50)) { // [自动静态注释] 条件判断/分支
    plVar1 = (long *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar26 = *(long **)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar4 = (long *)plVar26[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar16 = *plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long **)(*plVar26 + 8) = plVar4;
      *plVar4 = *plVar26;
      *(long **)(lVar16 + 8) = plVar26;
      *plVar26 = lVar16;
      FUN__text__0068fc34(param_1,*(undefined2 *)((long)plVar26 + 0x34)); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar11 = nn::fontll::ScalableFontEngine::CheckGlyphExist((uint)*(undefined8 *)(param_1 + 8)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar11 & 1) == 0) { // [自动静态注释] 条件判断/分支
        *(byte *)(plVar26 + 7) = *(byte *)(plVar26 + 7) | 0x40;
        lVar16 = *plVar26; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *plVar26 = *plVar1;
        *(long **)(lVar16 + 8) = plVar1;
        *(long **)(*plVar1 + 8) = plVar26;
        *plVar1 = lVar16;
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::fontll::ScalableFontEngine::SetScale // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  ((int)*(undefined8 *)(param_1 + 8),(uint)*(ushort *)((long)plVar26 + 0x36) << 0x10 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   ,0,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        fVar28 = (float)NEON_ucvtf((uint)*(ushort *)((long)plVar26 + 0x36)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar27 = (uint)(fVar28 * *(float *)(*(long *)(param_1 + 0x1bf0) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                                            (ulong)*(ushort *)((long)plVar26 + 0x34) * 0x1c + 8) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                       0.5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar16 = nn::fontll::ScalableFontEngine::AcquireGlyphmap // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                           ((uint)*(undefined8 *)(param_1 + 8),(ushort)plVar26[6]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar7 = (**(code **)(param_1 + 0x1be0)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          ((*(ushort *)(lVar16 + 0x1e) + uVar27) - (uint)*(ushort *)(lVar16 + 0xe)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(char *)((long)plVar26 + 0x3a) = (char)uVar7;
        uVar25 = *(uint *)(param_1 + 0x1880); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar25 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__00690730: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          iVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          pbVar20 = (byte *)(param_1 + 0x94); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            if (((uint)*pbVar20 == (uVar7 & 0xff)) && // [自动静态注释] 条件判断/分支
               (uVar18 = *(ushort *)(pbVar20 + -2), // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
               (uint)uVar18 + (int)*(short *)(lVar16 + 0x1c) + 2 < *(uint *)(param_1 + 0x28))) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            goto LAB__text__00690774; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            uVar11 = uVar11 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            pbVar20 = pbVar20 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (uVar25 != uVar11); // [自动静态注释] 循环/迭代
          if (0xff < uVar25) { // [自动静态注释] 条件判断/分支
            lVar16 = *plVar26; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *plVar26 = *(long *)(param_1 + 0x60);
            *(long *)(lVar16 + 8) = param_1 + 0x60;
            *(long **)(*(long *)(param_1 + 0x60) + 8) = plVar26;
            *(long *)(param_1 + 0x60) = lVar16;
            nn::fontll::ScalableFontEngine::ReleasesGlyph(*(void **)(param_1 + 8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            *(undefined4 *)(param_1 + 0x1bcc) = 2;
            goto LAB__text__0069059c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          if (uVar25 == 0) goto LAB__text__00690730; // [自动静态注释] 条件判断/分支
          lVar12 = param_1 + (ulong)(uVar25 - 1) * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar18 = *(ushort *)(lVar12 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          iVar8 = (**(code **)(param_1 + 0x1be8))(*(undefined1 *)(lVar12 + 0x94)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          iVar8 = (uint)uVar18 + iVar8 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        iVar9 = (**(code **)(param_1 + 0x1be8))(uVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((uint)(iVar9 + iVar8) < *(uint *)(param_1 + 0x2c)) { // [自动静态注释] 条件判断/分支
          uVar25 = *(uint *)(param_1 + 0x1880); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar11 = (ulong)uVar25; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar18 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar12 = param_1 + uVar11 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined2 *)(lVar12 + 0x92) = 0;
          *(short *)(lVar12 + 0x90) = (short)iVar8;
          *(char *)(lVar12 + 0x94) = (char)uVar7;
          *(char *)(lVar12 + 0x95) = (char)uVar25;
          *(uint *)(param_1 + 0x1880) = uVar25 + 1;
LAB__text__00690774: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          lVar12 = param_1 + uVar11 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar17 = plVar26 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar19 = *plVar17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(ushort *)(plVar26 + 8) = uVar18;
          *(undefined2 *)((long)plVar26 + 0x42) = *(undefined2 *)(lVar12 + 0x90);
          *(undefined1 *)((long)plVar26 + 0x3b) = *(undefined1 *)(lVar12 + 0x95);
          plVar13 = (long *)(lVar12 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *plVar17 = *plVar13;
          *(long **)(lVar19 + 8) = plVar13;
          *(long **)(*plVar13 + 8) = plVar17;
          *plVar13 = lVar19;
          *(short *)(lVar12 + 0x92) = *(short *)(lVar16 + 0x1c) + *(short *)(lVar12 + 0x92) + 2;
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          lVar12 = FUN__text__00690d30(param_1,*(undefined1 *)((long)plVar26 + 0x3a), // [自动静态注释] 调用尚未恢复正式名称的函数
                                       *(undefined2 *)(lVar16 + 0x1c));
          if (lVar12 == 0) { // [自动静态注释] 条件判断/分支
            lVar16 = *plVar26; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *plVar26 = *(long *)(param_1 + 0x60);
            *(long *)(lVar16 + 8) = param_1 + 0x60;
            *(long **)(*(long *)(param_1 + 0x60) + 8) = plVar26;
            *(long *)(param_1 + 0x60) = lVar16;
            nn::fontll::ScalableFontEngine::ReleasesGlyph(*(void **)(param_1 + 8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            *(undefined4 *)(param_1 + 0x1bcc) = 3;
            goto LAB__text__0069059c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          plVar17 = plVar26 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar19 = *plVar17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined2 *)(plVar26 + 8) = *(undefined2 *)(lVar12 + 0x40);
          *(undefined2 *)((long)plVar26 + 0x42) = *(undefined2 *)(lVar12 + 0x42);
          *(undefined1 *)((long)plVar26 + 0x3b) = *(undefined1 *)(lVar12 + 0x3b);
          plVar13 = (long *)(lVar12 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *plVar17 = *plVar13;
          *(long **)(lVar19 + 8) = plVar13;
          *(long **)(*plVar13 + 8) = plVar17;
          *plVar13 = lVar19;
        } // [自动静态注释] 作用域/控制流边界
        iVar9 = (int)*(short *)(lVar16 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar8 = uVar27 - iVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar11 = (ulong)*(ushort *)((long)plVar26 + 0x34); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar18 = *(ushort *)((long)plVar26 + 0x42); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar12 = *(long *)(param_1 + 0x1bf0) + uVar11 * 0x1c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar29 = *(float *)(lVar12 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar28 = *(float *)(lVar12 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(short *)(plVar26 + 9) = (short)(int)(fVar29 * (float)(int)*(short *)(lVar16 + 0x1c));
        *(short *)((long)plVar26 + 0x4a) =
             (short)(int)(fVar28 * (float)(iVar8 + *(short *)(lVar16 + 0x1e))); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined2 *)((long)plVar26 + 0x44) = *(undefined2 *)(lVar16 + 0x1c);
        *(short *)((long)plVar26 + 0x46) = *(short *)(lVar16 + 0x1e) + (short)iVar8;
        if ((*(char *)(*(long *)(param_1 + 0x1c08) + uVar11) == '\0') || // [自动静态注释] 条件判断/分支
           (*(short *)(lVar16 + 0x1c) == 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if (*(char *)(*(long *)(param_1 + 0x1c18) + uVar11) == '\0') { // [自动静态注释] 条件判断/分支
            if (*(char *)(param_1 + 0x1c50) == '\0') { // [自动静态注释] 条件判断/分支
              local_74[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              local_78[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              local_88 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              nn::fontll::ScalableFontEngine::GetAdvance // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (*(short **)(param_1 + 8),local_74,(int *)local_78, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         (int *)((long)&local_88 + 4),(int)local_74 - 0x14,(ushort)plVar26[6]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              lVar12 = *(long *)(param_1 + 0x1c10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar11 = (ulong)*(ushort *)((long)plVar26 + 0x34); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              sVar6 = local_74[0]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              lVar12 = *(long *)(param_1 + 0x1c10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              sVar6 = *(short *)(lVar16 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            *(short *)((long)plVar26 + 0x4c) =
                 (short)(int)(fVar29 * (float)((int)*(short *)(lVar12 + uVar11 * 2) + (int)sVar6)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            sVar6 = *(short *)(*(long *)(param_1 + 0x1c10) + uVar11 * 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            iVar15 = (int)*(short *)(lVar16 + 0xc) + ((int)(short)(sVar6 - (sVar6 >> 0xf)) >> 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            *(short *)((long)plVar26 + 0x4c) =
                 (short)(int)(fVar29 * (float)(int)*(short *)(*(long *)(param_1 + 0x1c28) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                                             uVar11 * 2)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            iVar14 = (int)*(short *)(*(long *)(param_1 + 0x1c28) + uVar11 * 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            iVar15 = iVar14 - *(short *)(lVar16 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (iVar14 < *(short *)(lVar16 + 0x1c)) { // [自动静态注释] 条件判断/分支
              iVar15 = iVar15 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            iVar15 = iVar15 >> 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(short *)((long)plVar26 + 0x4c) =
               (short)(int)(fVar29 * (float)((int)*(short *)(*(long *)(param_1 + 0x1c10) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                                            uVar11 * 2) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                            (int)*(short *)(lVar16 + 0x1c))); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar5 = *(ushort *)(*(long *)(param_1 + 0x1c10) + uVar11 * 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          iVar15 = (int)(((uint)uVar5 + (uint)(uVar5 >> 0xf)) * 0x10000) >> 0x11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        uVar7 = (uint)uVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar8 = iVar8 + uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(short *)((long)plVar26 + 0x4e) = (short)(int)(fVar29 * (float)iVar15);
        *(short *)(plVar26 + 10) =
             (short)(int)((float)*(int *)(*(long *)(param_1 + 0x1bf0) + uVar11 * 0x1c + 0x18) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         fVar28 * (float)(int)uVar27); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar11 = (ulong)((int)*(short *)(lVar16 + 0x1c) + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar12 = FUN__text__006ee750(*(undefined8 *)(param_1 + 0x1e98)); // [自动静态注释] 调用尚未恢复正式名称的函数
        lVar12 = lVar12 + *(long *)(param_1 + 0x1ea0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar18 = *(ushort *)((long)plVar26 + 0x42); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar25 = (uint)uVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((int)(uint)uVar18 < iVar8) { // [自动静态注释] 条件判断/分支
          uVar10 = ~(uint)uVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            memset((void *)(lVar12 + (ulong)((uint)*(ushort *)(plVar26 + 8) + // [自动静态注释] 内存复制、清零或移动
                                            (uVar10 + *(int *)(param_1 + 0x2c)) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                            *(int *)(param_1 + 0x28))),0,uVar11);
            uVar25 = uVar25 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar10 = uVar10 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while ((int)uVar25 < iVar8); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
        uVar25 = -iVar8 & (-iVar8 >> 0x1f ^ 0xffffffffU); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(char *)(*(long *)(param_1 + 0x1c00) + (ulong)*(ushort *)((long)plVar26 + 0x34)) == // [自动静态注释] 条件判断/分支
            '\0') { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if ((int)uVar25 < (int)*(short *)(lVar16 + 0x1e)) { // [自动静态注释] 条件判断/分支
            iVar8 = ((~uVar27 + iVar9) - uVar25) - uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            do { // [自动静态注释] 循环/迭代
              puVar2 = (undefined1 *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                       (lVar12 + (ulong)((uint)*(ushort *)(plVar26 + 8) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                        (iVar8 + *(int *)(param_1 + 0x2c)) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                        *(int *)(param_1 + 0x28)));
              memcpy(puVar2 + 1, // [自动静态注释] 内存复制、清零或移动
                     (void *)(lVar16 + (long)(int)*(short *)(lVar16 + 0x1c) * (long)(int)uVar25 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                             0x28),(long)*(short *)(lVar16 + 0x1c)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *puVar2 = 0;
              uVar25 = uVar25 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              iVar8 = iVar8 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              puVar2[(long)*(short *)(lVar16 + 0x1c) + 1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } while ((int)uVar25 < (int)*(short *)(lVar16 + 0x1e)); // [自动静态注释] 循环/迭代
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          nn::fontll::ScalableFontEngine::SetFlags(*(undefined8 *)(param_1 + 8),1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          lVar19 = nn::fontll::ScalableFontEngine::AcquireGlyphmap // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                             ((uint)*(undefined8 *)(param_1 + 8),(ushort)plVar26[6]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          nn::fontll::ScalableFontEngine::SetFlags(*(undefined8 *)(param_1 + 8),2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          sVar6 = *(short *)(lVar16 + 0x1e); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(short *)(lVar16 + 0x1e) <= *(short *)(lVar19 + 0x1e)) { // [自动静态注释] 条件判断/分支
            sVar6 = *(short *)(lVar19 + 0x1e); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          if ((int)uVar25 < (int)sVar6) { // [自动静态注释] 条件判断/分支
            iVar15 = ((~uVar27 + iVar9) - uVar25) - uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            do { // [自动静态注释] 循环/迭代
              sVar23 = *(short *)(lVar16 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar18 = *(ushort *)(plVar26 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              iVar14 = *(int *)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              iVar3 = *(int *)(param_1 + 0x2c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (0 < sVar23) { // [自动静态注释] 条件判断/分支
                lVar21 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                do { // [自动静态注释] 循环/迭代
                  if ((int)uVar25 < (int)*(short *)(lVar16 + 0x1e)) { // [自动静态注释] 条件判断/分支
                    cVar22 = *(char *)(lVar16 + (int)((int)lVar21 + uVar25 * (int)sVar23) + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    if ((int)*(short *)(lVar19 + 0x1e) <= (int)uVar25) goto LAB__text__00690bb0; // [自动静态注释] 条件判断/分支
LAB__text__00690b40: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    bVar24 = *(byte *)(lVar19 + 0x28 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                                       (long)(int)*(short *)(lVar19 + 0x1c) * (long)(int)uVar25 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                      lVar21) >> 1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  } // [自动静态注释] 作用域/控制流边界
                  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    cVar22 = '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    if ((int)uVar25 < (int)*(short *)(lVar19 + 0x1e)) goto LAB__text__00690b40; // [自动静态注释] 条件判断/分支
LAB__text__00690bb0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    bVar24 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  } // [自动静态注释] 作用域/控制流边界
                  *(byte *)(lVar12 + 1 + (ulong)((uint)uVar18 + iVar14 * (iVar3 + iVar15)) + lVar21)
                       = cVar22 - bVar24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  lVar21 = lVar21 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  sVar23 = *(short *)(lVar16 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                } while (lVar21 < sVar23); // [自动静态注释] 循环/迭代
              } // [自动静态注释] 作用域/控制流边界
              uVar10 = uVar25 + iVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar25 = uVar25 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              iVar15 = iVar15 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              puVar2 = (undefined1 *)(lVar12 + (ulong)((uint)uVar18 + (iVar3 + ~uVar10) * iVar14)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *puVar2 = 0;
              puVar2[(long)*(short *)(lVar16 + 0x1c) + 1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } while (uVar25 != (int)sVar6); // [自动静态注释] 循环/迭代
          } // [自动静态注释] 作用域/控制流边界
          nn::fontll::ScalableFontEngine::ReleasesGlyph(*(void **)(param_1 + 8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          lVar16 = lVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        uVar10 = (**(code **)(param_1 + 0x1be8))(*(undefined1 *)((long)plVar26 + 0x3a)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar25 = (uint)(short)*(ushort *)(lVar16 + 0x1e); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((uVar25 < uVar10) && (*(ushort *)(lVar16 + 0x1e) < 0xfffe)) { // [自动静态注释] 条件判断/分支
          iVar8 = ((~uVar27 + iVar9) - uVar25) - uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            uVar25 = uVar25 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            memset((void *)(lVar12 + (ulong)((uint)*(ushort *)(plVar26 + 8) + // [自动静态注释] 内存复制、清零或移动
                                            (iVar8 + *(int *)(param_1 + 0x2c)) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                            *(int *)(param_1 + 0x28))),0,uVar11);
            if (uVar10 <= uVar25) break; // [自动静态注释] 条件判断/分支
            iVar8 = iVar8 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (uVar25 < (int)*(short *)(lVar16 + 0x1e) + 2U); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__006ee764(*(undefined8 *)(param_1 + 0x1e98)); // [自动静态注释] 调用尚未恢复正式名称的函数
        nn::fontll::ScalableFontEngine::ReleasesGlyph(*(void **)(param_1 + 8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
LAB__text__0069059c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar26 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar4 != (long *)(param_1 + 0x50)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


