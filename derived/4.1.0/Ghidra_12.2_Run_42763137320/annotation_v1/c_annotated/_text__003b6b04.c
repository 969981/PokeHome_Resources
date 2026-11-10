/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B6B04
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b6b04; name: FUN_.text__003b6b04
 */


void FUN__text__003b6b04(float param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 (*pauVar2) [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 extraout_var; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar6 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong extraout_var_00; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_5c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_2 + 8) != '\0') { // [自动静态注释] 条件判断/分支
    auVar6 = (**(code **)(**(long **)(param_2 + 0x10) + 0x30)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                       (*(long **)(param_2 + 0x10),param_2 + 0x28); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar3 = (float)(**(code **)(**(long **)(param_2 + 0x10) + 0x30)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                             (*(long **)(param_2 + 0x10),param_2 + 0x30); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar3 = fVar3 - auVar6._0_4_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(param_2 + 0x54) == 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(param_2 + 0x80) = 0;
      lVar1 = param_2 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(**(long **)(param_2 + 0x10) + 0x50))(*(long **)(param_2 + 0x10),lVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      local_50 = CONCAT44(extraout_var,fVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_48 = extraout_var_00; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(**(long **)(param_2 + 0x10) + 0x48))(*(long **)(param_2 + 0x10),lVar1,&local_50); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(ulong *)(param_2 + 0x68) = uStack_48 & 0xffffffff;
      *(undefined8 *)(param_2 + 0x60) = local_50;
      _local_60 = CONCAT44(auVar6._4_4_,auVar6._0_4_ + fVar3 * 0.5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_58 = auVar6._8_8_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(**(long **)(param_2 + 0x10) + 0x28))(*(long **)(param_2 + 0x10),lVar1,&local_60); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (**(code **)(**(long **)(param_2 + 0x10) + 0x60))(*(long **)(param_2 + 0x10),param_2 + 0x18,0) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      auVar6 = (**(code **)(**(long **)(param_2 + 0x10) + 0x50)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                         (*(long **)(param_2 + 0x10),param_2 + 0x20); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      fVar4 = auVar6._0_4_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pauVar2 = (undefined1 (*) [16])(param_2 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *pauVar2 = auVar6;
      fVar7 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0x54)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(int *)(param_2 + 0x5c) == 0) { // [自动静态注释] 条件判断/分支
        fVar4 = fVar3 + fVar7 * fVar3 * -0.05; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (fVar4 <= 40.0) { // [自动静态注释] 条件判断/分支
          fVar4 = 40.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(float *)*pauVar2 = fVar4;
        fVar4 = (float)*(undefined8 *)*pauVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(float *)(param_2 + 0x80) = (fVar3 - fVar4) / fVar7;
      (**(code **)(**(long **)(param_2 + 0x10) + 0x48))(*(long **)(param_2 + 0x10),param_2 + 0x20); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar5 = (**(code **)(**(long **)(param_2 + 0x10) + 0x30)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      (*(long **)(param_2 + 0x10),param_2 + 0x28); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(int *)(param_2 + 0x74) = (int)((ulong)uVar5 >> 0x20);
    *(float *)(param_2 + 0x70) = (float)uVar5 + *(float *)(param_2 + 0x60) * 0.5;
    uStack_48 = *(undefined8 *)(param_2 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar3 = (float)(int)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(char *)(param_2 + 0x84) != '\0') { // [自动静态注释] 条件判断/分支
      fVar3 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    local_50 = CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20), // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (float)*(undefined8 *)(param_2 + 0x70) + fVar3 * *(float *)(param_2 + 0x80)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(**(long **)(param_2 + 0x10) + 0x28)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_2 + 0x10),param_2 + 0x20,&local_50); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


