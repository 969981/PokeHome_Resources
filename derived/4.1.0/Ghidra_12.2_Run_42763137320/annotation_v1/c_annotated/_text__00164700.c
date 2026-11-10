/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00064700
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00164700; name: FUN_.text__00164700
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00164700(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        uint param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  short *psVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short *psVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = FUN__text__005f37f0(param_3,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = uVar4 & 0xffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 < *(uint *)(param_1 + 0x1a0)) { // [自动静态注释] 条件判断/分支
    if (*(short *)(*(long *)(param_1 + 0x1a8) + (ulong)uVar4 * 0x18 + 0x10) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__005f335c(param_2,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__005f335c(param_2,2); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar5 = FUN__text__0015a530(0xbd,7); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__005f335c(param_2,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__005f335c(param_2,*(undefined2 *) // [自动静态注释] 调用尚未恢复正式名称的函数
                                   (*(long *)(param_1 + 0x1a8) + (ulong)uVar4 * 0x18 + 0x10)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar7 = FUN__text__0015a320(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar7 & 1) == 0) { // [自动静态注释] 条件判断/分支
      if ((param_4 & 1) == 0) { // [自动静态注释] 条件判断/分支
        *(uint *)(param_1 + 0x234) = uVar4;
        lVar9 = (ulong)uVar4 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__00164020(param_1,*(undefined8 *)(*(long *)(param_1 + 0x1a8) + lVar9)); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar7 = FUN__text__0015a210(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + lVar9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((uVar7 & 1) != 0) { // [自动静态注释] 条件判断/分支
          uVar5 = FUN__text__005f3254(uVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
          FUN__text__005f325c(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)uVar4 * 0x18), // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined8 *)(param_1 + 0x1e8),uVar5);
          FUN__text__00158a14(*_DAT_0089f538,*(undefined8 *)(param_1 + 0x1e8),uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
          FUN__text__005f32c4(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0x1e8)); // [自动静态注释] 调用尚未恢复正式名称的函数
          uVar10 = *(undefined8 *)(param_1 + 0x188); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__001643f0(param_1,param_2,uVar10,1,param_5 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if ((param_5 & 1) == 0) { // [自动静态注释] 条件判断/分支
          uVar7 = FUN__text__0015a210(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
          uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)uVar4 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if ((uVar7 & 1) != 0) { // [自动静态注释] 条件判断/分支
            uVar5 = FUN__text__005f3254(uVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
            FUN__text__005f325c(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)uVar4 * 0x18), // [自动静态注释] 调用尚未恢复正式名称的函数
                                *(undefined8 *)(param_1 + 0x1e8),uVar5);
            FUN__text__00158a14(*_DAT_0089f538,*(undefined8 *)(param_1 + 0x1e8),uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
            FUN__text__005f32c4(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0x1e8)); // [自动静态注释] 调用尚未恢复正式名称的函数
            uVar10 = *(undefined8 *)(param_1 + 0x188); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          psVar8 = *(short **)(param_1 + 0x1e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)uVar4 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = FUN__text__005f3254(uVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
          FUN__text__005f325c(uVar10,psVar8,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
          do { // [自动静态注释] 循环/迭代
            while( true ) { // [自动静态注释] 循环/迭代
              sVar11 = *psVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (sVar11 == 0) goto LAB__text__00164974; // [自动静态注释] 条件判断/分支
              if (sVar11 != 0x10) break; // [自动静态注释] 条件判断/分支
              psVar8 = (short *)FUN__text__005f3780(psVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
            } // [自动静态注释] 作用域/控制流边界
            uVar7 = FUN__text__00157130(sVar11,1); // [自动静态注释] 调用尚未恢复正式名称的函数
          } while ((uVar7 & 1) != 0); // [自动静态注释] 循环/迭代
          FUN__text__001589c8(*_DAT_0089f538,psVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__00164974: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          FUN__text__005f32c4(*(undefined8 *)(param_1 + 0x170),psVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
          uVar10 = *(undefined8 *)(param_1 + 0x170); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__005f3304(param_2,uVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar3 = FUN__text__005f37c0(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (uVar3 < 2) { // [自动静态注释] 条件判断/分支
        uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar5 = FUN__text__005f37f0(param_3,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__00164dd0(param_1,param_2,uVar4,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)uVar4 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    psVar8 = (short *)FUN__text__005f3244(uVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar6 = FUN__text__005f324c(uVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
    sVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar6 != 0) { // [自动静态注释] 条件判断/分支
      psVar1 = psVar8 + uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        while( true ) { // [自动静态注释] 循环/迭代
          sVar2 = *psVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (sVar2 != 0x10) break; // [自动静态注释] 条件判断/分支
          psVar8 = (short *)FUN__text__005f3780(psVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
          if (psVar1 <= psVar8) goto LAB__text__00164a00; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        uVar7 = FUN__text__00157130(sVar2,1); // [自动静态注释] 调用尚未恢复正式名称的函数
        psVar8 = psVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((uVar7 & 1) == 0) { // [自动静态注释] 条件判断/分支
          sVar11 = sVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
      } while (psVar8 < psVar1); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
LAB__text__00164a00: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(short *)(param_1 + 0x238) = sVar11;
    if (*(short *)(*(long *)(param_1 + 0x1a8) + (ulong)uVar4 * 0x18 + 0x10) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__005f335c(param_2,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__005f335c(param_2,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar5 = FUN__text__0015a530(0xbd,9); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__005f335c(param_2,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + 0x23c) = 0;
    *(undefined4 *)(param_1 + 0x244) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f3780(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


