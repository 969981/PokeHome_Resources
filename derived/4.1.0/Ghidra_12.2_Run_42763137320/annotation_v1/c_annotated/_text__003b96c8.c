/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B96C8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b96c8; name: FUN_.text__003b96c8
 */


void FUN__text__003b96c8(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong auStack_80 [3]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_60 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_50 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(uint *)(param_1 + 0x1c0) <= *(uint *)(param_1 + 0x1bc)) { // [自动静态注释] 条件判断/分支
    uVar8 = *(undefined4 *)(param_1 + 0x1c4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    if (*(code **)(param_1 + 0x120) != (code *)0x0) { // [自动静态注释] 条件判断/分支
      local_50[0] = CONCAT44(local_50[0]._4_4_,uVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_60[0] = CONCAT44(local_60[0]._4_4_,*(undefined4 *)(param_1 + 0x1d4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(param_1 + 0x120))(param_1 + 0x140,local_50,local_60); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + 0x1d4) = uVar8;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = *(uint *)(param_1 + 0x1bc) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = (float)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(param_1 + 0x1bc) = uVar1;
  fVar9 = *(float *)(param_1 + 0x1d4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = *(float *)(param_1 + 0x1c8) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar7 * (*(float *)(param_1 + 0x1cc) + fVar7 * *(float *)(param_1 + 0x1d0) * 0.5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(float *)(param_1 + 0x1d8) = fVar7 - fVar9;
  if (*(code **)(param_1 + 0x120) != (code *)0x0) { // [自动静态注释] 条件判断/分支
    local_50[0] = CONCAT44(local_50[0]._4_4_,fVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60[0] = CONCAT44(local_60[0]._4_4_,fVar9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(param_1 + 0x120))(param_1 + 0x140,local_50,local_60); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  fVar5 = *(float *)(param_1 + 0x1a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_1 + 0x1d4) = fVar7;
  if ((fVar5 <= fVar9) && (fVar6 = *(float *)(param_1 + 0x1a4), fVar9 <= fVar6)) { // [自动静态注释] 条件判断/分支
    bVar3 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((fVar5 <= fVar7) && (bVar3 = false, !NAN(fVar6) && !NAN(fVar7))) { // [自动静态注释] 条件判断/分支
      bVar3 = fVar6 < fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (bVar3) { // [自动静态注释] 条件判断/分支
      if (*(char *)(param_1 + 0x1ac) != '\0') { // [自动静态注释] 条件判断/分支
        lVar2 = param_1 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__003b9bfc(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
        local_50[0] = (ulong)(uint)*(float *)(param_1 + 0x1d4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar7 = *(float *)(param_1 + 0x1a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(float *)(param_1 + 0x1a0) <= *(float *)(param_1 + 0x1d4)) { // [自动静态注释] 条件判断/分支
          fVar7 = *(float *)(param_1 + 0x1a4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        local_50[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_60[0] = (ulong)(uint)*(float *)(param_1 + 0x1d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_60[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        auStack_80[0] = (ulong)(uint)-*(float *)(param_1 + 0x1d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        auStack_80[2] = (ulong)(uint)fVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        auStack_80[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__003b9c20(lVar2,0,local_50,local_60); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__003b9c20(lVar2,*(undefined4 *)(param_1 + 0x1b0),auStack_80 + 2,auStack_80); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined4 *)(param_1 + 0x1bc) = 0;
        *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x1b0);
        *(float *)(param_1 + 0x1c4) = fVar7;
        *(undefined4 *)(param_1 + 0x1b8) = 2;
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      *(undefined1 *)(param_1 + 0x1dc) = 0;
      *(undefined4 *)(param_1 + 0x1d8) = 0;
      if (fVar5 <= fVar7) { // [自动静态注释] 条件判断/分支
        fVar5 = fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(param_1 + 0x1b8) = 0;
      if (*(code **)(param_1 + 0x120) != (code *)0x0) { // [自动静态注释] 条件判断/分支
        local_50[0] = CONCAT44(local_50[0]._4_4_,fVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_60[0] = CONCAT44(local_60[0]._4_4_,fVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)(param_1 + 0x120))(param_1 + 0x140,local_50,local_60); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(float *)(param_1 + 0x1d4) = fVar5;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if ((((*(char *)(param_1 + 0x1dc) != '\0') && (0.0 < *(float *)(param_1 + 0x1d8))) && // [自动静态注释] 条件判断/分支
      (fVar5 = *(float *)(param_1 + 0x1e0), fVar9 <= fVar5)) && (fVar5 <= fVar7)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__003b98c4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(code **)(param_1 + 0x120) != (code *)0x0) { // [自动静态注释] 条件判断/分支
      local_50[0] = CONCAT44(local_50[0]._4_4_,fVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_60[0] = CONCAT44(local_60[0]._4_4_,fVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(param_1 + 0x120))(param_1 + 0x140,local_50,local_60); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(float *)(param_1 + 0x1d4) = fVar5;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((*(char *)(param_1 + 0x1dc) != '\0') && (*(float *)(param_1 + 0x1d8) < 0.0)) { // [自动静态注释] 条件判断/分支
    fVar5 = *(float *)(param_1 + 0x1e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (fVar7 <= fVar5) { // [自动静态注释] 条件判断/分支
      bVar3 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar4 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (!NAN(fVar5) && !NAN(fVar9)) { // [自动静态注释] 条件判断/分支
        bVar3 = fVar5 == fVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar4 = fVar9 <= fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    if (!bVar4 || bVar3) goto LAB__text__003b98c4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


