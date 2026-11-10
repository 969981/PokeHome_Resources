/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00200448
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00300448; name: FUN_.text__00300448
 */


void FUN__text__00300448(long *param_1,long param_2,uint param_3,uint param_4,undefined8 param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_28 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__002a32ac(&local_48,param_5,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__002a33c8(param_1,local_28,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
    if ((299 < param_3) || (0x1d < param_4)) goto LAB__text__0030055c; // [自动静态注释] 条件判断/分支
LAB__text__003004e4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar5 = param_2 + (ulong)param_3 * 0x5fa0 + (ulong)param_4 * 0x330; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00306b04(lVar4,lVar5 + 0x58); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar1 = *(undefined8 *)(lVar5 + 0x2f8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(lVar5 + 0x2f0);
    *(undefined8 *)(lVar4 + 0x68) = uVar1;
    uVar1 = *(undefined8 *)(lVar5 + 0x300); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *(undefined8 *)(lVar5 + 0x308); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = *(undefined8 *)(lVar5 + 0x318); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)(lVar5 + 0x310);
    *(undefined8 *)(lVar4 + 0x88) = uVar3;
    *(undefined8 *)(lVar4 + 0x70) = uVar1;
    *(undefined8 *)(lVar4 + 0x78) = uVar2;
    uVar1 = *(undefined8 *)(lVar5 + 0x328); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *(undefined8 *)(lVar5 + 0x330); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = *(undefined8 *)(lVar5 + 0x338); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)(lVar5 + 800);
    *(undefined8 *)(lVar4 + 0x98) = uVar1;
    *(undefined8 *)(lVar4 + 0xa0) = uVar2;
    *(undefined8 *)(lVar4 + 0xa8) = uVar3;
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar6 = (long *)(lVar4 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar6 + 0x10))(plVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((param_3 < 300) && (param_4 < 0x1e)) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar6 + 0x10))(plVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      goto LAB__text__003004e4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__0030055c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (local_48 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


