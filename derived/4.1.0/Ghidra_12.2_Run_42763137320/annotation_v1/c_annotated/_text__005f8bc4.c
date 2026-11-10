/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F8BC4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f8bc4; name: FUN_.text__005f8bc4
 */


void FUN__text__005f8bc4(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar6 = FUN__text__00109c48(&uStack_21,*(undefined8 *)(param_1 + 0x110)); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar5 = DAT_008e14a8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (DAT_008e14a8 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar1 = (undefined8 *)*DAT_008e14a8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = (long *)DAT_008e14a8[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = DAT_008e14a8[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = DAT_008e14a8[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = DAT_008e14a8[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    DAT_008e14a8 = (undefined8 *)lVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*(code *)*puVar1)(puVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar2,uVar4,uVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar6 = (long)DAT_008e14a8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  DAT_008e14a8 = (undefined8 *)lVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (DAT_008e14a8 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    lVar6 = (long)DAT_008e14a8 + 0x48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e914c(lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003e7744(DAT_008e14a8); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


