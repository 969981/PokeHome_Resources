/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0004E8A4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014e8a4; name: FUN_.text__0014e8a4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014e8a4(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_70 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_5c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__006ec8e0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar5 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  _uStack_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ebee4(local_70 + 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__005cd4dc(*(undefined8 *)(lVar5 + 0xb0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  _uStack_60 = CONCAT44(uVar2,uStack_60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__005cd554(*(undefined8 *)(lVar5 + 0xb0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_58 = CONCAT44(local_58._4_4_,uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ebed8(&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_50 = (local_50 >> 0x10 & 0xffff) << 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ebed8(local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
  piVar1 = _DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70[0] = (local_70[0] >> 0x10 & 0xffff) << 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006eddd4(*(long *)(*(long *)(lVar5 + 0x60) + 0x58) + (long)*_DAT_008a0300 * 0x168,0x80) // [自动静态注释] 调用尚未恢复正式名称的函数
  ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar6 = *(long *)(lVar5 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = FUN__text__0059fd48(*(undefined8 *)(lVar5 + 0xb8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = FUN__text__0059fd48(*(undefined8 *)(lVar5 + 0xb0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006ed304(*(long *)(lVar6 + 0x58) + (long)*piVar1 * 0x168,uVar3,local_70,0,0,0,uVar4, // [自动静态注释] 调用尚未恢复正式名称的函数
                      local_70 + 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(int *)(param_1 + 0x160) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006eddd4(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 0x160) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006ec93c(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


