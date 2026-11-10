/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00334FAC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00434fac; name: FUN_.text__00434fac
 */


undefined8 * FUN__text__00434fac(long param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar4 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((((param_2 & 0xff00000000) != 0x800000000) && ((param_2 & 0xffffffff) != 0)) && // [自动静态注释] 条件判断/分支
     (puVar4 = (undefined8 *)FUN__text__00400f80(0x10,0x90), puVar4 != (undefined8 *)0x0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__004368e0(puVar4,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar6 = param_2 >> 0x20 & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar5 = (long *)(param_1 + uVar6 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = *(uint *)(plVar5 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar3 == 0) || // [自动静态注释] 条件判断/分支
       (fVar7 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + uVar6 * 0x18 + 0x10)), // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
       0.9 < fVar7 / (float)uVar3)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00435c80(plVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = *(uint *)(plVar5 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar3 == 0) { // [自动静态注释] 条件判断/分支
        FUN__text__00436920(puVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__00400fc0(0x10,puVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
        return (undefined8 *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar3 != 0) { // [自动静态注释] 条件判断/分支
      uVar2 = *(uint *)(puVar4 + 1) / uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar1 = (ulong)(*(uint *)(puVar4 + 1) - uVar2 * uVar3) * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar4 = *(undefined8 *)(*plVar5 + lVar1);
    *(undefined8 **)(*plVar5 + lVar1) = puVar4;
    param_1 = param_1 + uVar6 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  } // [自动静态注释] 作用域/控制流边界
  return puVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


