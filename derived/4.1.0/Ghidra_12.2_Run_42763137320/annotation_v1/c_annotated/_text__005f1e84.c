/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F1E84
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f1e84; name: FUN_.text__005f1e84
 */


undefined8 * FUN__text__005f1e84(long param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined1 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 0x220) = *param_2;
  *(undefined8 *)(param_1 + 0x228) = param_2[1];
  *(undefined8 *)(param_1 + 0x230) = param_2[2];
  lVar5 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(param_1 + 0x238); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x238) = lVar5;
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x240) = param_2[4];
  *(undefined8 *)(param_1 + 0x248) = param_2[5];
  *(undefined8 *)(param_1 + 0x250) = param_2[6];
  lVar5 = param_2[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(param_1 + 600); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 600) = lVar5;
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = param_2[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(param_1 + 0x268); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x268) = lVar5;
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  pcVar3 = *(code **)(param_1 + 0x278); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar3 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x280) = 0;
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined8 *)(param_1 + 0x278) = 0;
    (*pcVar3)(param_1 + 0x290); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if ((code *)param_2[0xc] != (code *)0x0) { // [自动静态注释] 条件判断/分支
    (*(code *)param_2[0xc])(param_2 + 0xe,param_1 + 0x290); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar4 = param_2[0xd]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x278) = param_2[0xb];
    *(undefined8 *)(param_1 + 0x288) = uVar4;
    uVar4 = param_2[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x280) = param_2[0xc];
    *(undefined8 *)(param_1 + 0x270) = uVar4;
  } // [自动静态注释] 作用域/控制流边界
  pcVar3 = *(code **)(param_1 + 0x2f8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar3 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x300) = 0;
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    (*pcVar3)(param_1 + 0x310); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if ((code *)param_2[0x1c] != (code *)0x0) { // [自动静态注释] 条件判断/分支
    (*(code *)param_2[0x1c])(param_2 + 0x1e,param_1 + 0x310); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar4 = param_2[0x1d]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x2f8) = param_2[0x1b];
    *(undefined8 *)(param_1 + 0x308) = uVar4;
    uVar4 = param_2[0x1a]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x300) = param_2[0x1c];
    *(undefined8 *)(param_1 + 0x2f0) = uVar4;
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = param_2[0x2b]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(param_1 + 0x378); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x378) = lVar5;
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = param_2[0x2c]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(param_1 + 0x380); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x380) = lVar5;
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = param_2[0x2d]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(param_1 + 0x388); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x388) = lVar5;
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = param_2[0x2e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(param_1 + 0x390); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x390) = lVar5;
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = param_2[0x2f]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(param_1 + 0x398); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x398) = lVar5;
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = param_2[0x3d]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(undefined1 *)(param_2 + 0x3e); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x3f8) = param_2[0x3b];
  *(undefined8 *)(param_1 + 0x408) = uVar4;
  uVar4 = param_2[0x39]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x3d8) = param_2[0x37];
  *(undefined8 *)(param_1 + 1000) = uVar4;
  uVar4 = param_2[0x35]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x3b8) = param_2[0x33];
  *(undefined8 *)(param_1 + 0x3c8) = uVar4;
  *(undefined8 *)(param_1 + 0x3a8) = param_2[0x31];
  uVar4 = param_2[0x30]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x3b0) = param_2[0x32];
  *(undefined8 *)(param_1 + 0x3a0) = uVar4;
  uVar4 = param_2[0x34]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x3d0) = param_2[0x36];
  *(undefined8 *)(param_1 + 0x3c0) = uVar4;
  uVar4 = param_2[0x38]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x3f0) = param_2[0x3a];
  *(undefined8 *)(param_1 + 0x3e0) = uVar4;
  uVar4 = param_2[0x3c]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x410) = uVar1;
  *(undefined8 *)(param_1 + 0x400) = uVar4;
  return (undefined8 *)(param_1 + 0x220); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


