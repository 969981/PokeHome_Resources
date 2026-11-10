/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0045FC08
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055fc08; name: FUN_.text__0055fc08
 */


void FUN__text__0055fc08(float param_1,float *param_2,long param_3,long *param_4,ulong *param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(long **)(param_2 + 0xe8) = param_4;
  cVar2 = *(char *)(param_3 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(char *)(param_2 + 5) = cVar2;
  *param_2 = param_1;
  param_2[1] = 1.0 / param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = 1.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (cVar2 != '\0') { // [自动静态注释] 条件判断/分支
    fVar6 = 4.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  param_2[2] = fVar6 * param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[3] = 1.0 / (fVar6 * param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = (float)NEON_fminnm(param_1 * 0.5,0x469c4000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[4] = fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = *(float *)(param_5 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ulong *)(param_2 + 0xe5) = uVar5;
  uVar1 = (uint)uVar5 & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[0xe7] = fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((uVar5 & 0xff) == 0) || // [自动静态注释] 条件判断/分支
     ((((uVar1 != 0x90 || (*(char *)((long)param_2 + 0x399) == '\0')) && (uVar1 != 0x80)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      ((uVar1 != 0x90 || (*(char *)((long)param_2 + 0x399) != '\0')))))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined1 *)(param_2 + 0xe5) = 0x80;
    *(undefined2 *)(param_2 + 0xe6) = 0x30;
  } // [自动静态注释] 作用域/控制流边界
  fVar6 = *(float *)(param_3 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[0x9c] = fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (2 < (int)fVar6 - 1U) { // [自动静态注释] 条件判断/分支
    fVar6 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  plVar4 = (long *)(**(code **)(*param_4 + 0x10))(param_4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = (**(code **)(*plVar4 + 0xe0))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00561608(param_2 + 0xa0,fVar6,(int)param_1,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0057bf1c(param_2[2],*param_2 * 0.375,0,0x3f800000,param_2 + 0x34,3); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0057bf1c(param_2[2],*param_2 * 0.375,0,0x3f800000,param_2 + 0x58,3); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0057bf1c(param_2[2],*param_2 * 0.375,0,0x3f800000,param_2 + 0x7c,3); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


