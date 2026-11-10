/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00387BD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00487bd0; name: FUN_.text__00487bd0
 */


long FUN__text__00487bd0(int param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = (long)param_1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar13 = (&DAT_00aea890)[uVar3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((-1 < param_1) && (lVar13 == 0)) { // [自动静态注释] 条件判断/分支
    uVar1 = param_1 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar13 = FUN__text__00400f80(0,(ulong)(uVar1 * uVar1 * 0xc) << 2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar13 != 0) { // [自动静态注释] 条件判断/分支
      uVar14 = 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__00481ed0(0,0,0x3f800000,uVar3 & 0xffffffff,0xc,lVar13); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00481ed0(0xbf00e7e4,0,0x3f5d2d53,uVar3 & 0xffffffff,0xc,lVar13 + 4); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00481ed0(0xbf5d2d53,0,0x3f00e7e4,uVar3 & 0xffffffff,0xc,lVar13 + 8); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00481ed0(0xbf800000,0,0x248d3132,uVar3 & 0xffffffff,0xc,lVar13 + 0xc); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00481ed0(0xbf5d2d53,0,0xbf00e7e4,uVar3 & 0xffffffff,0xc,lVar13 + 0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00481ed0(0xbf00e7e4,0,0xbf5d2d53,uVar3 & 0xffffffff,0xc,lVar13 + 0x14); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00481ed0(0,0,0xbf800000,uVar3 & 0xffffffff,0xc,lVar13 + 0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00481ed0(0x3f00e7e4,0,0xbf5d2d53,uVar3 & 0xffffffff,0xc,lVar13 + 0x1c); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00481ed0(0x3f5d2d53,0,0xbf00e7e4,uVar3 & 0xffffffff,0xc,lVar13 + 0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00481ed0(0x3f800000,0,0xa553c9ca,uVar3 & 0xffffffff,0xc,lVar13 + 0x24); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00481ed0(0x3f5d2d53,0,0x3f00e7e4,uVar3 & 0xffffffff,0xc,lVar13 + 0x28); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00481ed0(0x3f00e7e4,0,0x3f5d2d53,uVar3 & 0xffffffff,0xc,lVar13 + 0x2c); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar9 = 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        iVar7 = (int)uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar4 = iVar7 * iVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar11 = iVar4 * 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar16 = *(float *)(uVar8 * 4 + 0x73cf60) * *(float *)(uVar8 * 4 + 0x73b71c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar16 = fVar16 * fVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(float *)(lVar13 + (ulong)uVar11 * 4) = *(float *)(lVar13 + (ulong)uVar11 * 4) * fVar16;
        lVar5 = (ulong)(iVar4 * 0xc | 1) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar6 = (ulong)(iVar4 * 0xc | 3) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(float *)(lVar13 + lVar5) = *(float *)(lVar13 + lVar5) * fVar16;
        lVar5 = (ulong)(iVar4 * 0xc | 2) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(float *)(lVar13 + lVar5) = *(float *)(lVar13 + lVar5) * fVar16;
        lVar5 = (ulong)(uVar11 + 4) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar15 = *(float *)(lVar13 + lVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(float *)(lVar13 + lVar6) = *(float *)(lVar13 + lVar6) * fVar16;
        lVar6 = (ulong)(uVar11 + 5) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(float *)(lVar13 + lVar5) = fVar15 * fVar16;
        lVar5 = (ulong)(uVar11 + 6) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar15 = *(float *)(lVar13 + lVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(float *)(lVar13 + lVar6) = *(float *)(lVar13 + lVar6) * fVar16;
        lVar6 = (ulong)(uVar11 + 7) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(float *)(lVar13 + lVar5) = fVar15 * fVar16;
        lVar5 = (ulong)(uVar11 + 8) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar15 = *(float *)(lVar13 + lVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(float *)(lVar13 + lVar6) = *(float *)(lVar13 + lVar6) * fVar16;
        lVar6 = (ulong)(uVar11 + 9) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(float *)(lVar13 + lVar5) = fVar15 * fVar16;
        lVar5 = (ulong)(uVar11 + 10) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar15 = *(float *)(lVar13 + lVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(float *)(lVar13 + lVar6) = *(float *)(lVar13 + lVar6) * fVar16;
        uVar12 = 1 - uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(float *)(lVar13 + lVar5) = fVar15 * fVar16;
        lVar5 = (ulong)(uVar11 + 0xb) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(float *)(lVar13 + lVar5) = *(float *)(lVar13 + lVar5) * fVar16;
        if ((long)uVar12 < (long)uVar8) { // [自动静态注释] 条件判断/分支
          uVar12 = uVar12 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar11 = uVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            uVar12 = (ulong)((int)uVar12 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined4 *)(lVar13 + (ulong)(uVar11 + 1) * 4) = 0;
            *(undefined4 *)(lVar13 + (ulong)(uVar11 + 2) * 4) = 0;
            *(undefined4 *)(lVar13 + (ulong)(uVar11 + 3) * 4) = 0;
            *(undefined4 *)(lVar13 + (ulong)(uVar11 + 4) * 4) = 0;
            *(undefined4 *)(lVar13 + (ulong)(uVar11 + 5) * 4) = 0;
            *(undefined4 *)(lVar13 + (ulong)(uVar11 + 6) * 4) = 0;
            *(undefined4 *)(lVar13 + (ulong)(uVar11 + 7) * 4) = 0;
            *(undefined4 *)(lVar13 + (ulong)(uVar11 + 8) * 4) = 0;
            *(undefined4 *)(lVar13 + (ulong)(uVar11 + 9) * 4) = 0;
            *(undefined4 *)(lVar13 + (ulong)(uVar11 + 10) * 4) = 0;
            uVar2 = uVar11 + 0xb; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined4 *)(lVar13 + (ulong)uVar11 * 4) = 0;
            uVar11 = uVar11 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined4 *)(lVar13 + (ulong)uVar2 * 4) = 0;
            uVar10 = uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (uVar8 != uVar12); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar10 = uVar12 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        if (uVar10 == uVar8) { // [自动静态注释] 条件判断/分支
          iVar4 = (int)uVar12 + iVar7 + iVar7 * iVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar11 = iVar4 * 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(float *)(lVar13 + (ulong)uVar11 * 4) = *(float *)(lVar13 + (ulong)uVar11 * 4) * fVar16;
          lVar5 = (ulong)(iVar4 * 0xc | 1) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(float *)(lVar13 + lVar5) = *(float *)(lVar13 + lVar5) * fVar16;
          lVar5 = (ulong)(iVar4 * 0xc | 2) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(float *)(lVar13 + lVar5) = *(float *)(lVar13 + lVar5) * fVar16;
          lVar5 = (ulong)(uVar11 + 4) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar6 = (ulong)(iVar4 * 0xc | 3) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar15 = *(float *)(lVar13 + lVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(float *)(lVar13 + lVar6) = *(float *)(lVar13 + lVar6) * fVar16;
          lVar6 = (ulong)(uVar11 + 6) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(float *)(lVar13 + lVar5) = fVar15 * fVar16;
          lVar5 = (ulong)(uVar11 + 5) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar15 = *(float *)(lVar13 + lVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(float *)(lVar13 + lVar5) = *(float *)(lVar13 + lVar5) * fVar16;
          lVar5 = (ulong)(uVar11 + 7) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(float *)(lVar13 + lVar6) = fVar15 * fVar16;
          lVar6 = (ulong)(uVar11 + 8) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar15 = *(float *)(lVar13 + lVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(float *)(lVar13 + lVar5) = *(float *)(lVar13 + lVar5) * fVar16;
          lVar5 = (ulong)(uVar11 + 9) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(float *)(lVar13 + lVar6) = fVar15 * fVar16;
          *(float *)(lVar13 + lVar5) = *(float *)(lVar13 + lVar5) * fVar16;
          lVar5 = (ulong)(uVar11 + 10) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar6 = (ulong)(uVar11 + 0xb) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(float *)(lVar13 + lVar5) = *(float *)(lVar13 + lVar5) * fVar16;
          *(float *)(lVar13 + lVar6) = *(float *)(lVar13 + lVar6) * fVar16;
        } // [自动静态注释] 作用域/控制流边界
        uVar8 = uVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar14 = uVar14 + iVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar9 = iVar9 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar8 != uVar1); // [自动静态注释] 循环/迭代
      (&DAT_00aea890)[uVar3] = lVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return lVar13; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


