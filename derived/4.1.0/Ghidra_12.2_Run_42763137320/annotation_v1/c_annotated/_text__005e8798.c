/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E8798
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e8798; name: FUN_.text__005e8798
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e8798(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = _DAT_008a5b40 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = _DAT_008a5b40 + 0x88; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xb] = _DAT_008a5b40 + 0xb8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pcVar3 = (code *)param_1[0x5f]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar2;
  param_1[9] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar3 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    param_1[0x61] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x60] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x5f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x5e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*pcVar3)(param_1 + 0x62); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  pcVar3 = (code *)param_1[0x4f]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar3 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    param_1[0x51] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x50] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x4f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x4e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*pcVar3)(param_1 + 0x52); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x4a)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar2 = param_1[0x44]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x44] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x005e8838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x45] + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            ((long *)param_1[0x45],lVar2,param_1[0x46],param_1[0x47]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


