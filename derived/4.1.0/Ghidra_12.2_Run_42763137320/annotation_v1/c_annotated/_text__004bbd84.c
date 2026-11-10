/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003BBD84
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004bbd84; name: FUN_.text__004bbd84
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004bbd84(long param_1,undefined8 param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_2f; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uStack_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_28 = FUN__text__004ba030(); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_38 = &local_28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_24 = *(byte *)(param_1 + 0x36) & 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = *(undefined1 *)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = *(float *)(param_1 + 0x4c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar4 = *(float *)(param_1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(undefined4 *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_2f = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *_DAT_008a45f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar6 = *(float *)(param_1 + 0x50) - fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar6 == 0.0) { // [自动静态注释] 条件判断/分支
    fVar6 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar3 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *_DAT_008a45e8 = lVar3;
    fVar6 = fVar6 * 4.656613e-10 * (float)(uint)((ulong)lVar3 >> 0x21); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_68 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00434a40(fVar5 + fVar4 + fVar6,uVar2,uVar1,&local_68,&local_38, // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(undefined4 *)(param_1 + 0x54),0);
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


