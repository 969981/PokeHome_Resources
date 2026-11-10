/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B9408
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b9408; name: FUN_.text__003b9408
 */


void FUN__text__003b9408(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong auStack_60 [3]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_40 [3]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0x1b4) == '\0') { // [自动静态注释] 条件判断/分支
    if (*(int *)(param_1 + 0x1b8) != 0) { // [自动静态注释] 条件判断/分支
      uVar2 = *(int *)(param_1 + 0x1b8) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar2 < 4) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x003b9540 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK__text__003b9550 + (ulong)*(byte *)((ulong)uVar2 + 0x73a7b5) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    fVar4 = *(float *)(param_1 + 0x1d4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(float *)(param_1 + 0x1a0) <= fVar4) && // [自动静态注释] 条件判断/分支
       (bVar3 = false, !NAN(*(float *)(param_1 + 0x1a4)) && !NAN(fVar4))) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar3 = *(float *)(param_1 + 0x1a4) < fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (bVar3) { // [自动静态注释] 条件判断/分支
      lVar1 = param_1 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__003b9bfc(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_40[2] = (ulong)(uint)*(float *)(param_1 + 0x1d4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar4 = *(float *)(param_1 + 0x1a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(float *)(param_1 + 0x1a0) <= *(float *)(param_1 + 0x1d4)) { // [自动静态注释] 条件判断/分支
        fVar4 = *(float *)(param_1 + 0x1a4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      local_40[0] = (ulong)(uint)*(float *)(param_1 + 0x1d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_40[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auStack_60[0] = (ulong)(uint)-*(float *)(param_1 + 0x1d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auStack_60[2] = (ulong)(uint)fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      auStack_60[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__003b9c20(lVar1,0,local_40 + 2,local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__003b9c20(lVar1,*(undefined4 *)(param_1 + 0x1b0),auStack_60 + 2,auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(param_1 + 0x1bc) = 0;
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x1b0);
      *(float *)(param_1 + 0x1c4) = fVar4;
      *(undefined4 *)(param_1 + 0x1b8) = 2;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


