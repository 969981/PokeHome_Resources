/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003D9AB8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d9ab8; name: FUN_.text__004d9ab8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004d9ab8(long *param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_28 = (**(code **)(*param_1 + 0x38))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = (**(code **)(*param_1 + 0x40))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0046c3b0(param_1,&local_28,uVar2 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*(long *)param_1[0x3a] + 0x130))((long *)param_1[0x3a],1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar1 = _DAT_008a4938; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = param_1[0x44]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = param_1[0xe]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 == 0 && lVar4 == 0) { // [自动静态注释] 条件判断/分支
    if ((long *)*_DAT_008a4938 != param_1) goto LAB__text__004d9b70; // [自动静态注释] 条件判断/分支
    lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
      *(long *)(lVar4 + 0x220) = lVar3;
      lVar3 = param_1[0x44]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = param_1[0xe]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if ((long *)*plVar1 != param_1) { // [自动静态注释] 条件判断/分支
    plVar1 = (long *)(lVar3 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *plVar1 = lVar5;
  param_1[0x44] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__004d9b70: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00477910(param_1,param_2 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


