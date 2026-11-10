/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00319514
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00419514; name: FUN_.text__00419514
 */


void FUN__text__00419514(undefined8 param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_48 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *(long *)(DAT_00aea220 + (param_2 & 0xffffffff) * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__004d4eb0(auStack_48,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_40 != -1) { // [自动静态注释] 条件判断/分支
    local_38 = (undefined8 *)0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00412c50(&local_18,&local_38,0x10,8,0x713429,0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar1 = local_38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (local_18 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      *local_18 = 0x8875d0;
      local_18[1] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    local_38 = (undefined8 *)0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_18 = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00413d68(param_1,&local_18,1,local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004d5f50(lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(lVar3 + 0x30) == 0) { // [自动静态注释] 条件判断/分支
    if (((*(long *)(lVar3 + 0x68) == 0) || (*(long *)(*(long *)(lVar3 + 0x68) + 0x80) == 0)) && // [自动静态注释] 条件判断/分支
       (lVar2 = FUN__text__0040a740(), lVar2 != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00414710(lVar3,lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00413d04(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


