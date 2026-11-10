/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0024AD30
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0034ad30; name: FUN_.text__0034ad30
 */


undefined8 FUN__text__0034ad30(undefined8 param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_9f8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_9f4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int aiStack_9f0 [622]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 < 0x27e0) { // [自动静态注释] 条件判断/分支
    if (param_2 == 0x2267) { // [自动静态注释] 条件判断/分支
      lVar5 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(lVar5 + 0x127d) = 0;
      *(undefined8 *)(lVar5 + 0x121d) = 0;
      *(undefined8 *)(lVar5 + 0x1225) = 0;
      *(undefined8 *)(lVar5 + 0x122d) = 0;
      *(undefined8 *)(lVar5 + 0x1235) = 0;
      *(undefined8 *)(lVar5 + 0x123d) = 0;
      *(undefined8 *)(lVar5 + 0x1245) = 0;
      *(undefined8 *)(lVar5 + 0x124d) = 0;
      *(undefined8 *)(lVar5 + 0x1255) = 0;
      *(undefined8 *)(lVar5 + 0x125d) = 0;
      *(undefined8 *)(lVar5 + 0x1265) = 0;
      *(undefined8 *)(lVar5 + 0x126d) = 0;
      *(undefined8 *)(lVar5 + 0x1275) = 0;
      __s = (void *)FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      memset(__s,0,1000); // [自动静态注释] 内存复制、清零或移动
      lVar5 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined8 *)(lVar5 + 0x12a1) = 0;
      *(undefined8 *)(lVar5 + 0x12a9) = 0;
      *(undefined1 *)(lVar5 + 0x12b1) = 0;
      nn::crypto::GenerateCryptographicallyRandomBytes(&local_18,4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar10 = -0x26e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar11 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9f8 = (uint)local_18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = (ulong)(((uint)local_18 ^ (uint)local_18 >> 0x1e) * 0x6c078965) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9f4 = (undefined4)lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      piVar7 = aiStack_9f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        iVar1 = iVar11 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar11 = iVar11 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar4 = ((uint)lVar5 ^ (uint)lVar5 >> 0x1e) * 0x6c078965; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar9 = (int)lVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar2 = iVar4 + iVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar10 = lVar10 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *piVar7 = iVar9 + iVar4 + 0x270;
        lVar5 = lVar10 + (ulong)((uVar2 ^ uVar2 >> 0x1e) * 0x6c078965) + 0x26f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        piVar7[1] = (int)lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        piVar7 = piVar7 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar10 != 0); // [自动静态注释] 循环/迭代
      local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_18 = 0x3d00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(lVar5 + 0x12a1) = 0x73;
      lVar5 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(lVar5 + 0x12a2) = 0x77;
      lVar5 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(lVar5 + 0x12a3) = 0x74;
      lVar5 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(lVar5 + 0x12a4) = 99;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(lVar5 + 0x12a5) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(lVar5 + 0x12a6) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(lVar5 + 0x12a7) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(lVar5 + 0x12a8) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(lVar5 + 0x12a9) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(lVar5 + 0x12aa) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(lVar5 + 0x12ab) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(lVar5 + 0x12ac) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(lVar5 + 0x12ad) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(lVar5 + 0x12ae) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(lVar5 + 0x12af) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(lVar5 + 0x12b0) = uVar3;
      lVar5 = FUN__text__0030d5f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(lVar5 + 0x12b1) = 0;
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (param_2 != 0x27de) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar5 = FUN__text__00321ac0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar8 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((param_2 != 0x27e3) && (param_2 != 0x27e0)) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar5 = FUN__text__00321ac0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar8 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(lVar5 + 0x934d0) = uVar8;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


