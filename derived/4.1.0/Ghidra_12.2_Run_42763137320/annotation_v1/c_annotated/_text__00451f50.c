/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00351F50
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00451f50; name: FUN_.text__00451f50
 */


void FUN__text__00451f50(long param_1,ushort param_2,long *param_3,long *param_4,long *param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long *param_6,long *param_7,long *param_8) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 != 0) { // [自动静态注释] 条件判断/分支
    uVar14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      pbVar11 = *(byte **)(param_1 + uVar14 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar13 = *(long *)(pbVar11 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar2 = *pbVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__00452180(pbVar11 + 4,lVar13,*(undefined8 *)(lVar13 + 0x28),bVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__004523b0(pbVar11 + 0x10,lVar13 + 0x14,*(undefined8 *)(lVar13 + 0x30),(uint)bVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      bVar3 = pbVar11[0xd]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar8 = (bVar3 & 8) != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar4 = pbVar11[0x19]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar9 = (bVar4 & 8) != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar12 = (uint)bVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = (undefined2)uVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(float *)(pbVar11 + 8) == *(float *)(pbVar11 + 4)) { // [自动静态注释] 条件判断/分支
        bVar7 = *(float *)(pbVar11 + 0x14) != *(float *)(pbVar11 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (!bVar9 || !bVar8) goto LAB__text__00451fa0; // [自动静态注释] 条件判断/分支
LAB__text__00452040: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if ((bVar3 & 4 & bVar4) == 0) { // [自动静态注释] 条件判断/分支
          if (((bVar4 | bVar3) >> 2 & 1) == 0) { // [自动静态注释] 条件判断/分支
            if (bVar7) { // [自动静态注释] 条件判断/分支
              plVar10 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              plVar10 = param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            uVar1 = *(uint *)(plVar10 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(uint *)(plVar10 + 1) = uVar1 + 1;
            *(undefined2 *)(*plVar10 + (ulong)uVar1 * 2) = uVar6;
            *(uint *)((long)plVar10 + 0xc) = *(int *)((long)plVar10 + 0xc) + uVar12;
          } // [自动静态注释] 作用域/控制流边界
          else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            if ((bVar3 & 4) == 0) { // [自动静态注释] 条件判断/分支
              if (!bVar7) { // [自动静态注释] 条件判断/分支
                uVar1 = *(uint *)((long)param_8 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar5 = *(undefined2 *)(*param_8 + (ulong)*(uint *)(param_8 + 1) * 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                *(uint *)((long)param_8 + 0xc) = uVar1 + 1;
                *(undefined2 *)(*param_8 + (ulong)uVar1 * 2) = uVar5;
                uVar1 = *(uint *)(param_8 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                lVar13 = *param_8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                *(uint *)(param_8 + 1) = uVar1 + 1;
LAB__text__00452144: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                *(undefined2 *)(lVar13 + (ulong)uVar1 * 2) = uVar6;
                *(uint *)(param_8 + 2) = (int)param_8[2] + uVar12;
                goto LAB__text__00451fc0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              } // [自动静态注释] 作用域/控制流边界
              uVar1 = *(uint *)((long)param_7 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar5 = *(undefined2 *)(*param_7 + (ulong)*(uint *)(param_7 + 1) * 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(uint *)((long)param_7 + 0xc) = uVar1 + 1;
              *(undefined2 *)(*param_7 + (ulong)uVar1 * 2) = uVar5;
              uVar1 = *(uint *)(param_7 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              lVar13 = *param_7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(uint *)(param_7 + 1) = uVar1 + 1;
            } // [自动静态注释] 作用域/控制流边界
            else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              if (!bVar7) { // [自动静态注释] 条件判断/分支
                uVar1 = *(uint *)((long)param_8 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                lVar13 = *param_8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                *(uint *)((long)param_8 + 0xc) = uVar1 + 1;
                goto LAB__text__00452144; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              } // [自动静态注释] 作用域/控制流边界
              uVar1 = *(uint *)((long)param_7 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              lVar13 = *param_7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(uint *)((long)param_7 + 0xc) = uVar1 + 1;
            } // [自动静态注释] 作用域/控制流边界
            *(undefined2 *)(lVar13 + (ulong)uVar1 * 2) = uVar6;
            *(uint *)(param_7 + 2) = (int)param_7[2] + uVar12;
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar12 = *(uint *)(param_3 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(uint *)(param_3 + 1) = uVar12 + 1;
          *(undefined2 *)(*param_3 + (ulong)uVar12 * 2) = uVar6;
          *(uint *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) + (uint)bVar2;
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        bVar7 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (bVar9 && bVar8) goto LAB__text__00452040; // [自动静态注释] 条件判断/分支
LAB__text__00451fa0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar1 = *(uint *)(param_4 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(uint *)(param_4 + 1) = uVar1 + 1;
        *(undefined2 *)(*param_4 + (ulong)uVar1 * 2) = uVar6;
        *(uint *)((long)param_4 + 0xc) = *(int *)((long)param_4 + 0xc) + uVar12;
      } // [自动静态注释] 作用域/控制流边界
LAB__text__00451fc0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar14 = uVar14 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (param_2 != uVar14); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


