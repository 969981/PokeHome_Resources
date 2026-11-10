/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0037CD50
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047cd50; name: FUN_.text__0047cd50
 */


void FUN__text__0047cd50(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar4 = (float)NEON_fminnm(*(float *)(param_1 + 0x50) * // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                             (float)(param_2 - *(int *)(param_1 + 0x44)),0x3f800000); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (fVar4 <= 0.0) { // [自动静态注释] 条件判断/分支
    fVar4 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar5 = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 100) * fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x68) * fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = *(float *)(param_1 + 0x60) + fVar4 * *(float *)(param_1 + 0x6c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 0x38) != 0) { // [自动静态注释] 条件判断/分支
    fVar7 = *(float *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar8 = *(float *)(param_1 + 0x74); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar9 = *(float *)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1 = *(long **)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar2 = plVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = *(long *)(*plVar1 + 0x1c8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(float *)(lVar3 + 4) = (fVar5 - fVar7) + *(float *)(lVar3 + 4);
      *(float *)(lVar3 + 8) = (fVar6 - fVar8) + *(float *)(lVar3 + 8);
      *(float *)(lVar3 + 0xc) = (fVar4 - fVar9) + *(float *)(lVar3 + 0xc);
      plVar1 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar2 != (long *)(*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 8)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *(float *)(param_1 + 0x70) = fVar5;
  *(float *)(param_1 + 0x74) = fVar6;
  *(float *)(param_1 + 0x78) = fVar4;
  if (param_2 < *(uint *)(param_1 + 0x48)) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0047c988(); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


