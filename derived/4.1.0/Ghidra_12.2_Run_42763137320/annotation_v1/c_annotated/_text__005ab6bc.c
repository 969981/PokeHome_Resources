/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004AB6BC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ab6bc; name: FUN_.text__005ab6bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005ab6bc(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__005e6444(); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x4c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = _DAT_008a5700; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x4d) = 1;
  *(undefined1 *)((long)param_1 + 0x26c) = 0;
  param_1[0x4e] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar5 + 0x10;
  param_1[9] = lVar5 + 0x68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[10] = lVar5 + 0xa8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = FUN__text__0015223c(&uStack_21,param_1[1],local_38 + 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  pcVar6 = *(code **)(lVar5 + 0x278); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar6 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    *(undefined8 *)(lVar5 + 0x270) = 0;
    *(undefined8 *)(lVar5 + 0x278) = 0;
    (*pcVar6)(lVar5 + 0x290); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = _DAT_008a5718; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = _DAT_008a5710; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = _DAT_008a5708; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(lVar5 + 0x290) = param_1;
  uVar4 = _DAT_008a5720; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(lVar5 + 0x268) = 0;
  *(undefined8 *)(lVar5 + 0x270) = uVar1;
  *(undefined8 *)(lVar5 + 0x278) = uVar2;
  *(undefined8 *)(lVar5 + 0x280) = uVar3;
  *(undefined8 *)(lVar5 + 0x288) = uVar4;
  *(ulong *)(lVar5 + 0x130) = *(ulong *)(lVar5 + 0x130) | 2;
  local_38[0] = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005e733c(param_1,local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_38[0] != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_38[0] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x4d) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


