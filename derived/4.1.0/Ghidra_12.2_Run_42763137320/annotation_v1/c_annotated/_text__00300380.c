/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00200380
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00300380; name: FUN_.text__00300380
 */


void FUN__text__00300380(long param_1,long *param_2,uint param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((299 < param_3) || (0x1d < param_4)) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = param_1 + (ulong)param_3 * 0x5fa0 + (ulong)param_4 * 0x330; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
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
  uVar1 = *(undefined8 *)(lVar5 + 800); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(undefined8 *)(lVar5 + 0x328); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(undefined8 *)(lVar5 + 0x338); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)(lVar5 + 0x330);
  *(undefined8 *)(lVar4 + 0xa8) = uVar3;
  *(undefined8 *)(lVar4 + 0x90) = uVar1;
  *(undefined8 *)(lVar4 + 0x98) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00300434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


