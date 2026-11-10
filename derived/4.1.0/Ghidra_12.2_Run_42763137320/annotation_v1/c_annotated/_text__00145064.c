/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00045064
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00145064; name: FUN_.text__00145064
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__00145064(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x238); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar6 = *(undefined8 **)(lVar5 + 0x300); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar6 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    lVar7 = *(long *)(lVar5 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = FUN__text__006ec5f4(*(undefined8 *)(lVar5 + 0x20)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar1 = puVar6[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_38 = (undefined8 *)(lVar4 + lVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *local_38 = *puVar6;
    local_38[1] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = puVar6[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = puVar6[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = puVar6[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_38[4] = puVar6[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_38[5] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_38[2] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_38[3] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*_DAT_0089fc90 + 0x240))(*_DAT_0089fc90 + 0x260,&local_38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar5 = *(long *)(lVar5 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006ec60c(lVar5,0,*(undefined8 *)(lVar5 + 0x48)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006ec608(lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006d73f0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return puVar6 != (undefined8 *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


