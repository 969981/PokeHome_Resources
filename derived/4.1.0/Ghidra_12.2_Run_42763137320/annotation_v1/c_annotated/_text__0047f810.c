/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0037F810
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047f810; name: FUN_.text__0047f810
 */


void FUN__text__0047f810(float param_1,undefined8 *param_2,uint param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_4 + 0x28) = *param_2;
  *(undefined8 *)(param_4 + 0x30) = uVar1;
  uVar2 = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_4 + 0x48) = param_2[4];
  *(undefined8 *)(param_4 + 0x50) = uVar2;
  *(undefined8 *)(param_4 + 0x38) = uVar1;
  *(undefined8 *)(param_4 + 0x40) = uVar3;
  uVar4 = *(uint *)(param_4 + 0xc0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(uint *)(param_4 + 0xb8) & 0xf00) != 0x300) { // [自动静态注释] 条件判断/分支
    uVar4 = *(uint *)(param_4 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00484580(param_3,uVar4,*(undefined8 *)(param_4 + 0xf8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = ((uVar4 & 0xff) + 3 & 0x1fc) * (param_3 & 0xff); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = (ulong)uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
    pfVar6 = (float *)(*(long *)(param_4 + 0xf8) + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar5 = uVar5 - 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar6[-1] = pfVar6[-1] * param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *pfVar6 = *pfVar6 * param_1;
      pfVar6 = pfVar6 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar5 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


