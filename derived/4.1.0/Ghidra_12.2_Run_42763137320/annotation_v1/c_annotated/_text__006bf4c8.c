/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005BF4C8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bf4c8; name: FUN_.text__006bf4c8
 */


void FUN__text__006bf4c8(long param_1,float *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar3 = *(float *)(param_1 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = *(float *)(param_1 + 0xfc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((fVar4 == fVar6 && fVar3 == fVar5) && (*(ushort *)(param_1 + 0x114) & 4) == 0) { // [自动静态注释] 条件判断/分支
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(ushort *)(param_1 + 0x114) = uVar2 | *(ushort *)(param_1 + 0x114) & 0xfffb;
  if (fVar4 != fVar6 || fVar3 != fVar5) { // [自动静态注释] 条件判断/分支
    if (fVar4 == 0.0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)param_2;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = *(undefined8 *)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0xf8) = uVar1;
    fVar5 = (float)((ulong)uVar1 >> 0x20) / (float)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(float *)(param_1 + 0x118) = (fVar3 / fVar4) * *(float *)(param_1 + 0x118) * fVar5;
    *(float *)(param_1 + 0x134) = (fVar3 / fVar4) * *(float *)(param_1 + 0x134) * fVar5;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


