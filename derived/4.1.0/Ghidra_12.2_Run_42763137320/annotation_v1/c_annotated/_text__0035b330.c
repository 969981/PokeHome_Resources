/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0025B330
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0035b330; name: FUN_.text__0035b330
 */


void FUN__text__0035b330(long *param_1,long param_2,uint param_3,uint param_4,undefined8 param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_38 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__002a32ac(&local_40,param_5,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__002a33c8(param_1,local_38,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar5 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
    if ((299 < param_3) || (0x1d < param_4)) goto LAB__text__0035b420; // [自动静态注释] 条件判断/分支
LAB__text__0035b3b4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__0030681c(lVar5,param_2 + (ulong)param_3 * 0x2850 + (ulong)param_4 * 0x158 + 0x60); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar4 = param_2 + (ulong)param_3 * 12000 + (ulong)param_4 * 400; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = *(undefined8 *)(lVar4 + 0x5e7cec); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)(lVar4 + 0x5e7ce4);
    *(undefined8 *)(lVar5 + 0x68) = uVar1;
    uVar1 = *(undefined8 *)(lVar4 + 0x5e7cf4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *(undefined8 *)(lVar4 + 0x5e7cfc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = *(undefined8 *)(lVar4 + 0x5e7d0c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar5 + 0x80) = *(undefined8 *)(lVar4 + 0x5e7d04);
    *(undefined8 *)(lVar5 + 0x88) = uVar3;
    *(undefined8 *)(lVar5 + 0x70) = uVar1;
    *(undefined8 *)(lVar5 + 0x78) = uVar2;
    uVar1 = *(undefined8 *)(lVar4 + 0x5e7d14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *(undefined8 *)(lVar4 + 0x5e7d1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = *(undefined8 *)(&DAT__text__005e7d2c + lVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar5 + 0xa0) = *(undefined8 *)(lVar4 + 0x5e7d24);
    *(undefined8 *)(lVar5 + 0xa8) = uVar3;
    *(undefined8 *)(lVar5 + 0x90) = uVar1;
    *(undefined8 *)(lVar5 + 0x98) = uVar2;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((param_3 < 300) && (param_4 < 0x1e)) goto LAB__text__0035b3b4; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__0035b420: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (local_40 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


