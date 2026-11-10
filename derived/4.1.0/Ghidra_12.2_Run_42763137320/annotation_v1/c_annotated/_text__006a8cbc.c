/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005A8CBC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a8cbc; name: FUN_.text__006a8cbc
 */


long * FUN__text__006a8cbc(long param_1,undefined8 param_2,undefined8 param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = FUN__text__006a30c8(param_1,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    plVar3 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00699a30(&local_60,lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar1 = local_58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = (long *)FUN__text__006a0f04(0x70); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006a9034(); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar4 = plVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = *plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar5 = (long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar4 = *plVar5;
    *(long **)(lVar2 + 8) = plVar5;
    *(long **)(*plVar5 + 8) = plVar4;
    *plVar5 = lVar2;
    (**(code **)(*plVar3 + 0x40))(plVar3,param_2,*(undefined8 *)(param_1 + 0x40),uVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__006a9100(plVar3,&local_60,param_1,*(undefined8 *)(param_1 + 0x20),param_4 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return plVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


