/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00581BC0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00681bc0; name: FUN_.text__00681bc0
 */


undefined8 FUN__text__00681bc0(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *(long *)(param_1 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = *(long *)(param_1 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = (ulong)(*(char *)(param_1 + 0xea) != '\0') << 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__00681ffc(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18)); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_48 = CONCAT44(local_48._4_4_,uVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(char *)(param_1 + 0xe9) == '\0') || // [自动静态注释] 条件判断/分支
     (uVar2 = FUN__text__00682d04(param_1,&local_58,0,0), (int)uVar2 == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_2 = local_58;
    param_2[1] = local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2[2] = local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(param_1 + 0xa8) = lVar3;
    *(long *)(param_1 + 0xb0) = lVar4;
    *(long *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


