/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001F4714
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f4714; name: FUN_.text__002f4714
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002f4714(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = _DAT_008a28d8 + 0x10;
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xf)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar2 = (undefined8 *)param_1[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)*puVar2)(puVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(*(long *)param_1[0xc] + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              ((long *)param_1[0xc],puVar2,param_1[0xd],param_1[0xe]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  puVar2 = (undefined8 *)param_1[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)*puVar2)(puVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(*(long *)param_1[8] + 0x18))((long *)param_1[8],puVar2,param_1[9],param_1[10]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  param_1[2] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                    /* WARNING: Could not recover jumptable at 0x002f47c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar1,param_1[3] - lVar1,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


