/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003CDD3C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cdd3c; name: FUN_.text__004cdd3c
 */


undefined8 FUN__text__004cdd3c(long param_1,undefined8 *param_2,ushort param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort local_4c [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_48 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_44 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_3c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort local_38 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_34 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_38[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = (**(code **)*param_2)(param_2,local_38,2,auStack_34); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((uVar2 & 1) != 0) && (local_38[0] == param_3)) { // [自动静态注释] 条件判断/分支
    local_3c = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_44[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_4c[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (**(code **)*param_2)(param_2,&local_3c,4,auStack_34); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (((uVar2 & 1) != 0) && // [自动静态注释] 条件判断/分支
       ((((uVar2 = (**(code **)*param_2)(param_2,&local_40,4,auStack_34), (uVar2 & 1) != 0 && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          (uVar2 = (**(code **)*param_2)(param_2,local_44,2,auStack_34), (uVar2 & 1) != 0)) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
         (uVar2 = (**(code **)*param_2)(param_2,local_48,2,auStack_34), (uVar2 & 1) != 0)) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (uVar2 = (**(code **)*param_2)(param_2,local_4c,2,auStack_34), (uVar2 & 1) != 0)))) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = param_3 + 7 >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x28),uVar1,&local_50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (((uVar2 & 1) != 0) && // [自动静态注释] 条件判断/分支
         (uVar2 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x30),uVar1,&local_50), // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
         (uVar2 & 1) != 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined4 *)(param_1 + 8) = local_3c;
        *(undefined4 *)(param_1 + 0xc) = local_40;
        *(undefined2 *)(param_1 + 0x10) = local_44[0];
        *(undefined2 *)(param_1 + 0x12) = local_48[0];
        if (local_4c[0] == 0) { // [自动静态注释] 条件判断/分支
          uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar2 = FUN__text__004cdf60((undefined8 *)(param_1 + 0x18)); // [自动静态注释] 调用尚未恢复正式名称的函数
          if (((uVar2 & 1) != 0) && // [自动静态注释] 条件判断/分支
             (uVar2 = (**(code **)*param_2) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                                (param_2,*(undefined8 *)(param_1 + 0x18),(ulong)local_4c[0] << 1, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                 &local_50), (uVar2 & 1) != 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          *(undefined4 *)(param_1 + 0xc) = local_3c;
          *(ushort *)(param_1 + 0x10) = local_38[0];
          if (local_38[0] != 0) { // [自动静态注释] 条件判断/分支
            uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            do { // [自动静态注释] 循环/迭代
              *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar2) = 0;
              uVar2 = uVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } while (uVar2 < (ulong)local_38[0] + 7 >> 3); // [自动静态注释] 循环/迭代
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


