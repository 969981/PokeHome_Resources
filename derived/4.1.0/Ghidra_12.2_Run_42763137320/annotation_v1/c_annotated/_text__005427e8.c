/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004427E8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005427e8; name: FUN_.text__005427e8
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__005427e8(long param_1,undefined8 param_2,undefined8 param_3,float *param_4,float *param_5 // [自动静态注释] 调用尚未恢复正式名称的函数
                   ) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    uVar1 = FUN__text__005170c0(*(undefined8 *)(param_1 + 0x18),param_3,param_2,param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
    return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  fVar3 = *(float *)(lVar2 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = *(float *)(lVar2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = param_4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = *(float *)(lVar2 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = *(float *)(lVar2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = (fVar6 * fVar3 - *param_4) * fVar3 + fVar4 * (fVar6 * fVar4 - fVar7) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar5 * (fVar6 * fVar5 - fVar8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  fVar6 = fVar6 + fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_5 = *param_4 + fVar3 * fVar6;
  param_5[1] = fVar7 + fVar4 * fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_5[2] = fVar8 + fVar5 * fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


